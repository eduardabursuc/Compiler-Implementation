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
