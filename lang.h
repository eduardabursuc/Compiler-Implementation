#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>

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
    string scope = "global";

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
    bool isConst = false;
    Parameter(const string &name, const string &type)
        : name(name), type(type) {}
};

class Function
{
public:
    string name;
    string returnType;
    string scope;
    vector<Parameter> params;
    Function(const string &name, const string &returnType, const vector<Parameter> &params, const string &scope)
        : name(name), returnType(returnType), params(params), scope(scope) {}
};

class UserDefinedType
{
public:
    string name;
    UserDefinedType(const string &name)
        : name(name) {}

};

class Array
{
public:
    string name;
    string type;

    int capacity = 0;
    int index = 0;

    vector<Value> vals;
    Array(const string &name, int capacity, string type): name(name), capacity(capacity), type(type) {}

    void push(Value val) {
        index ++;
        if ( index <= capacity ){
            vals.push_back(val);
        } else {
            printf("Segmentation fault.");
            return;
        }
        
    }

    void add(int ind, Value val) {
    if (ind < 0 || ind > capacity) {
        printf("Index out of bounds.\n");
        return;
    } else if (ind > index){
        for( int i = 0; i < ind; i++ ){
            vals.resize(ind + 1, Value());
        }
        vals.at(ind) = val;
    } else {
        vals.at(ind) = val;
    }
    }

    Value getVal(int ind) {

        if (ind < 0 || ind > capacity || ind > index) {
            printf("Index out of bounds.\n");
            return Value();
        } else {
            return vals.at(ind);
        }

    }

};

class IdList
{
    vector<Variable> vars;
    vector<Function> funcs;
    vector<UserDefinedType> usrdefs;
    vector<Array> arrays;

public:
    bool exists(const char *name)
    {
        for (const auto &var : vars)
            if (var.name == name)
                return true;

        for (const auto &func : funcs)
            if (func.name == name)
                return true;

        for (const auto &usrdef : usrdefs)
            if (usrdef.name == name)
                return true;

        for (const auto &array : arrays)
            if (array.name == name)
                return true;

        return false;

    }

    Variable& getVar(const char *name) {

        for (auto &var : vars) {
            if (var.name == name) {
                return var;
            }
        }

        throw std::runtime_error("Variable not found: " + std::string(name));
    }

    Function& getFunc(const char *name) {
        for (auto &func : funcs)
            if (func.name == name)
                return func;
    }

    UserDefinedType& getUDT(const char *name) {
        for (auto &udt : usrdefs)
            if (udt.name == name)
                return udt;
    }

    Array& getArray(const char *name) {
        for (auto &array : arrays)
            if (array.name == name)
                return array;
        throw std::runtime_error("Variable not found: " + std::string(name));
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

    void addUsrDef(const UserDefinedType &usrdef)
    {
        if (!exists(usrdef.name.c_str()))
            usrdefs.push_back(usrdef);
    }

    void addArr(const Array &array)
    {
        if (!exists(array.name.c_str()))
            arrays.push_back(array);
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
                    std::cout << "\t\tName: " << param.name << ", Type: " << param.type;
                }
                std::cout << ", Const?: ";
                if (func.params.back().isConst)
                    std::cout << "[Const]   ";
                else
                    std::cout << "[Not Const]   ";

                cout << "Scope: " << func.scope <<std::endl;
            }
        }
    }

    void printUsrDefs()
    {
        if (usrdefs.empty())
        {
            std::cout << "No user defined types to display." << std::endl;
            return;
        }

        std::cout << "User Defined Types List:" << std::endl;
        for (const auto &usrdef : usrdefs)
        {
            std::cout << "Name: " << usrdef.name << std::endl;
        }
    }

    void printArrays()
    {
        if (arrays.empty())
        {
            std::cout << "No arrays to display." << std::endl;
            return;
        }

        std::cout << "Arrays:" << std::endl;
        for (const auto &array : arrays)
        {
            std::cout << "Name: " << array.name << ", Type: " << array.type << ", Capacity: " << array.capacity << std::endl;
            std::cout << "\tElements: ";
            for (auto &element : array.vals)
            {
                if( element.type == "char" ) {
                    cout << element.charVal << " ";
                } else if ( element.type == "float"  ) {
                    cout << element.floatVal << " ";
                } else if ( element.type == "bool" ) {
                    cout << element.boolVal << " ";
                } else if ( element.type == "int"  ) {
                    cout << element.intVal << " ";
                }
            }
            std::cout << std::endl;
        }
    }

    void exportToFile(std::string fileName)
    {
        std::ofstream file(fileName);
        if (file.is_open())
        {
            file << "Variables List:\n";
            for (const auto &var : vars)
            {
                file << "Name: " << var.name << ", Type: " << var.val.type << ", Const?: [" << (var.val.isConst ? "Const" : "Not Const") << "]\n";
            }

            file << "\nFunctions List:\n";
            for (const auto &func : funcs)
            {
                file << "Name: " << func.name << ", Return Type: " << func.returnType << "\n\tParameters:\n";
                for (const auto &param : func.params)
                {
                    file << "\t\tName: " << param.name << ", Type: " << param.type << ", Const?: [" << (param.isConst ? "Const" : "Not Const") << "]\n";
                }
            }

            file << "\nUser Defined Types List:\n";
            for (const auto &typeName : usrdefs)
            {
                file << "Name: " << typeName.name << "\n";
            }

            file.close();
        }
        else
        {
            std::cerr << "Unable to open file for writing.\n";
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

    AST(Value *val) : val(*val){
        if (val->isIntSet) {
            type = "int";
        } else if (val->isFloatSet) {
            type = "float";
        } else if (val->isBoolSet) {
            type = "bool";
        } else if (val->isCharSet) {
            type = "char";
        } else if (val->isStringSet) {
            type = "string";
        }
    }

    AST(Value val) : val(val) {
        if (val.isIntSet) {
            type = "int";
        } else if (val.isFloatSet) {
            type = "float";
        } else if (val.isBoolSet) {
            type = "bool";
        } else if (val.isCharSet) {
            type = "char";
        } else if (val.isStringSet) {
            type = "string";
        }
    }

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
                } else if (root == "gt")
                {
                    result.boolVal = leftResult.intVal > rightResult.intVal;
                }
                else if (root == "lt")
                {
                    result.boolVal = leftResult.boolVal < rightResult.boolVal;
                }
                else if (root == "geq")
                {
                    result.boolVal = leftResult.intVal >= rightResult.intVal;
                }
                else if (root == "leq")
                {
                    result.boolVal = leftResult.intVal <= rightResult.intVal;
                }
                else if (root == "eq")
                {
                    result.boolVal = leftResult.intVal == rightResult.intVal;
                }
                else if (root == "neq")
                {
                    result.boolVal = leftResult.intVal != rightResult.intVal;
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
                } else if (root == "gt")
                {
                    result.boolVal = leftResult.floatVal > rightResult.floatVal;
                }
                else if (root == "lt")
                {
                    result.boolVal = leftResult.floatVal < rightResult.floatVal;
                }
                else if (root == "geq")
                {
                    result.boolVal = leftResult.floatVal >= rightResult.floatVal;
                }
                else if (root == "leq")
                {
                    result.boolVal = leftResult.floatVal <= rightResult.floatVal;
                }
                else if (root == "eq")
                {
                    result.boolVal = leftResult.floatVal == rightResult.floatVal;
                }
                else if (root == "neq")
                {
                    result.boolVal = leftResult.floatVal != rightResult.floatVal;
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
        } else {
            return val;
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
                        if ( root == "+" || root == "-" || root == "/" || root == "*" || root == "%"){
                            this->type = leftType;
                            return leftType;
                        } else {
                            return "bool";
                        }
                        
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
                return left->TypeOf();
            }
        }

        return type;

    }

    void printAst() {

    if(left != NULL)
    this->left->printAst();

    // Print current node's data
    if( !root.empty() ){
        cout << root << " ";
    } else {
        if (val.isIntSet) {
            cout << val.intVal << " ";
        } else if (val.isFloatSet) {
            cout << val.floatVal << " ";
        } else if (val.isBoolSet) {
            cout << val.boolVal << " ";
        } else if (val.isCharSet) {
            cout << val.charVal << " ";
        } else if (val.isStringSet) {
            cout << val.stringVal << " ";
        }
    }

    if(right != NULL)
    this->right->printAst();


    }

};