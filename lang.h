#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Info {
public:
    string type;
    string val;
    Info() : type(""), val("") {}
    Info(const string &type, const string &val) : type(type), val(val) {}
};

class Vars {
public:
    string name;
    string scope;
    Info info;
    Vars() : name(""), scope(""), info() {}
    Vars(const string &name, const string &scope, const Info &info) : name(name), scope(scope), info(info) {}
};

class ListParam{
public:
    vector<Vars> list;
    void addVar(const Vars &var)
    {
        list.push_back(var);
    }
    ListParam() {}
};

class FunctionInfo {
public:
    string name;
    string type;
    string scope;
    ListParam params;
    FunctionInfo() : name(""), type(""), scope("") {}
    FunctionInfo(const string &name, const string &type, const string &scope, const ListParam &params): 
        name(name), type(type), scope(scope), params(params) {}
};

class IdList {
    vector<Vars> vars;

public:
    bool existsVar(const char *s);
    void addVar(const char * type, const char * name);
    void printVars();
    ~IdList();
};

class ClassInfo
{
public:
    string name;
    vector<Vars> fields;
    vector<FunctionInfo> methods;
    ClassInfo() : name("") {}
    ClassInfo(const string &name, const vector<Vars> &fields, const vector<FunctionInfo> &methods): 
        name(name), fields(fields), methods(methods) {}
};

class Value {
public:
    string type;
    int intVal;
    float floatVal ;
    bool boolVal ;
};

class AST {
    string type = "";
    Value val;
    string root;
    AST* left;
    AST* right;


    AST(Value val, string root, AST* left, AST* right){
        this->val = val;
        this->root = root;
        this->left = left;
        this->right = right;
    }

    Value Eval(){

        if (root.empty()) {
            return val; 
        } else if ( left->TypeOf().compare(right->TypeOf()) == 0 ){

            Value leftResult = left->Eval();
            Value rightResult = right->Eval();
            Value result;


            if (left->type.compare("int") == 0 ) {

                result.type = "int";

                if (root == "+"){
                    result.intVal = leftResult.intVal + rightResult.intVal;
                } else if (root == "-") {
                    result.intVal = leftResult.intVal - rightResult.intVal;
                } else if (root == "*") {
                    result.intVal = leftResult.intVal * rightResult.intVal;
                } else if (root == "/") {
                    result.intVal = leftResult.intVal / rightResult.intVal;
                } else if (root == "%") {
                    result.intVal = leftResult.intVal % rightResult.intVal;
                }         
            } else if (left->type.compare("float") == 0 ) {

                result.type = "float";

                if (root == "+"){
                    result.floatVal = leftResult.floatVal + rightResult.floatVal;
                } else if (root == "-") {
                    result.floatVal = leftResult.floatVal - rightResult.floatVal;
                } else if (root == "*") {
                    result.floatVal = leftResult.floatVal * rightResult.floatVal;
                } else if (root == "/") {
                    result.floatVal = leftResult.floatVal / rightResult.floatVal;
                } 
            } else if (left->type.compare("bool") == 0 ) {

                result.type = "bool";

                if (root == "or") {
                    result.boolVal = leftResult.boolVal || rightResult.boolVal;
                } else if (root == "and") {
                    result.boolVal = leftResult.boolVal && rightResult.boolVal;
                } else if (root == "gt") {
                    result.boolVal = leftResult.boolVal > rightResult.boolVal;
                } else if (root == "lt") {
                    result.boolVal = leftResult.boolVal < rightResult.boolVal;
                } else if (root == "geq") {
                    result.boolVal = leftResult.boolVal >= rightResult.boolVal;
                } else if (root == "leq") {
                    result.boolVal = leftResult.boolVal <= rightResult.boolVal;
                } else if (root == "eq") {
                    result.boolVal = leftResult.boolVal == rightResult.boolVal;
                } else if (root == "neq") {
                    result.boolVal = leftResult.boolVal != rightResult.boolVal;
                }
            }

            return result;

        }


    }
    
    string TypeOf() {
    if (!root.empty()) {
        if (left && right) {
            string leftType = left->TypeOf();
            string rightType = right->TypeOf();

            if (!leftType.empty() && !rightType.empty()) {
                if (leftType == rightType) {
                    type = leftType;
                    return leftType;
                } else {
                    cout << "Different types: operation " << root << " between " << leftType << " and " << rightType << endl;
                    return "Error";
                }
            }
        } else {
            return type;
        }
    }

    return type;
}

};

bool IdList::existsVar(const char *s) {
    string strvar = string(s);
    for (const Vars &v : vars) {
        if (strvar == v.name) {
            return true;
        }
    }
    return false;
}

void IdList::addVar(const char *type, const char *name)
{
    Vars var;
    var.name = string(name);
    var.info.type = string(type);
    vars.push_back(var);
}

void IdList::printVars()
{
    for (const Vars &v : vars)
    {
        cout << "name: " << v.name << ", type: " << v.info.type << ", value: " << v.info.val << endl;
    }
}

IdList::~IdList() {
    vars.clear();
}
