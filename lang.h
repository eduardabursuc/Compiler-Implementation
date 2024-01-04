#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Value
{
public:
    string type;
    int intVal;
    float floatVal;
    bool boolVal;
    char charVal;
    string stringVal;
    bool isIntSet, isFloatSet, isBoolSet, isCharSet, isStringSet, isConst = false;

    Value() : isIntSet(false), isFloatSet(false), isBoolSet(false), isCharSet(false), isStringSet(false) {}

    Value(string type) : type(type), isIntSet(false), isFloatSet(false), isBoolSet(false), isCharSet(false), isStringSet(false) {}

    Value(char *value, string type)
    {

        if (type == "int")
        {
            this->intVal = atoi(value);
            isIntSet = true;
        }
        else if (type == "float")
        {
            this->floatVal = atof(value);
            isFloatSet = true;
        }
        else if (type == "bool")
        {
            boolVal = (string(value) == "true");
            isBoolSet = true;
        }
        else if (type == "char")
        {
            this->charVal = value[0];
            isCharSet = true;
        }
        else if (type == "string")
        {
            this->stringVal = value;
            isStringSet = true;
        }

        this->type = type;
    }
};

class Variable
{
public:
    std::string name;
    Value val;

    Variable(const std::string &name, const Value &val)
        : name(name), val(val) {}

    Value Eval()
    {
        return this->val;
    }

    string TypeOf()
    {
        return this->val.type;
    }
};

class Parameter
{
public:
    string name;
    string type;
    Parameter(const string &name, const string &type)
        : name(name), type(type) {}
};

class Function
{
public:
    string name;
    string returnType;
    vector<Parameter> params;
    Function(const string &name, const string &returnType, const vector<Parameter> &params)
        : name(name), returnType(returnType), params(params) {}
};

class IdList
{
    vector<Variable> vars;
    vector<Function> funcs;

public:
    bool exists(const char *name)
    {
        for (const auto &var : vars)
            if (var.name == name)
                return true;

        for (const auto &func : funcs)
            if (func.name == name)
                return true;
        return false;
    }

    void addVar(const Variable &var)
    {
        if (!exists(var.name.c_str()))
            vars.push_back(var);
    }

    void addFunc(const Function &func)
    {
        if (!exists(func.name.c_str()))
            funcs.push_back(func);
    }

    void printVars()
    {
        if (vars.empty())
        {
            std::cout << "No variables to display." << std::endl;
            return;
        }

        std::cout << "Variables List:" << std::endl;
        for (const auto &var : vars)
        {
            std::cout << "Name: " << var.name << ", Type: " << var.val.type;

            if (var.val.isIntSet)
                std::cout << ", Int Value: " << var.val.intVal;
            if (var.val.isFloatSet)
                std::cout << ", Float Value: " << var.val.floatVal;
            if (var.val.isBoolSet)
                std::cout << ", Bool Value: " << (var.val.boolVal ? "true" : "false");
            if (var.val.isCharSet)
                std::cout << ", Char Value: " << var.val.charVal;
            if (var.val.isStringSet)
                std::cout << ", String Value: " << var.val.stringVal;

            std::cout << " Const?:";
            if (var.val.isConst)
                std::cout << " [Const]";
            else
                std::cout << " [Not Const]";

            std::cout << std::endl;
        }
    }

    void printFuncs()
    {
        if (funcs.empty())
        {
            std::cout << "No functions to display." << std::endl;
            return;
        }

        std::cout << "Functions List:" << std::endl;
        for (const auto &func : funcs)
        {
            std::cout << "Name: " << func.name << ", Return Type: " << func.returnType << std::endl;
            if (!func.params.empty())
            {
                std::cout << "\tParameters: " << std::endl;
                for (const auto &param : func.params)
                {
                    std::cout << "\t\tName: " << param.name << ", Type: " << param.type << std::endl;
                }
            }
        }
    }
    ~IdList() {}
};

class AST
{

public:
    string type = "";
    Value val;
    string root;
    AST *left;
    AST *right;

    AST(AST *left, string root, AST *right) : root(root), left(left), right(right) {}

    AST(Value *val) : val(*val) {}

    Value Eval()
    {

        if (root.empty())
        {
            return val;
        }
        else if (left->TypeOf().compare(right->TypeOf()) == 0)
        {

            Value leftResult = left->Eval();
            Value rightResult = right->Eval();
            Value result;

            if (left->type.compare("int") == 0)
            {

                result.type = "int";

                if (root == "+")
                {
                    result.intVal = leftResult.intVal + rightResult.intVal;
                }
                else if (root == "-")
                {
                    result.intVal = leftResult.intVal - rightResult.intVal;
                }
                else if (root == "*")
                {
                    result.intVal = leftResult.intVal * rightResult.intVal;
                }
                else if (root == "/")
                {
                    result.intVal = leftResult.intVal / rightResult.intVal;
                }
                else if (root == "%")
                {
                    result.intVal = leftResult.intVal % rightResult.intVal;
                }
            }
            else if (left->type.compare("float") == 0)
            {

                result.type = "float";

                if (root == "+")
                {
                    result.floatVal = leftResult.floatVal + rightResult.floatVal;
                }
                else if (root == "-")
                {
                    result.floatVal = leftResult.floatVal - rightResult.floatVal;
                }
                else if (root == "*")
                {
                    result.floatVal = leftResult.floatVal * rightResult.floatVal;
                }
                else if (root == "/")
                {
                    result.floatVal = leftResult.floatVal / rightResult.floatVal;
                }
            }
            else if (left->type.compare("bool") == 0)
            {

                result.type = "bool";

                if (root == "or")
                {
                    result.boolVal = leftResult.boolVal || rightResult.boolVal;
                }
                else if (root == "and")
                {
                    result.boolVal = leftResult.boolVal && rightResult.boolVal;
                }
                else if (root == "not")
                {
                    result.boolVal = !leftResult.boolVal;
                }
                else if (root == "gt")
                {
                    result.boolVal = leftResult.boolVal > rightResult.boolVal;
                }
                else if (root == "lt")
                {
                    result.boolVal = leftResult.boolVal < rightResult.boolVal;
                }
                else if (root == "geq")
                {
                    result.boolVal = leftResult.boolVal >= rightResult.boolVal;
                }
                else if (root == "leq")
                {
                    result.boolVal = leftResult.boolVal <= rightResult.boolVal;
                }
                else if (root == "eq")
                {
                    result.boolVal = leftResult.boolVal == rightResult.boolVal;
                }
                else if (root == "neq")
                {
                    result.boolVal = leftResult.boolVal != rightResult.boolVal;
                }
            }

            return result;
        }
    }

    string TypeOf()
    {
        if (!root.empty())
        {
            if (left && right)
            {
                string leftType = left->TypeOf();
                string rightType = right->TypeOf();

                if (!leftType.empty() && !rightType.empty())
                {
                    if (leftType == rightType)
                    {
                        this->type = leftType;
                        return leftType;
                    }
                    else
                    {
                        cout << "Different types: operation " << this->root << " between " << leftType << " and " << rightType << endl;
                        return "Error";
                    }
                }
            }
            else
            {
                return type;
            }
        }

        return type;
    }
};