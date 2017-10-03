#ifndef NUMBER_H
#define NUMBER_H
#include <string>

#include "atom.h"
#include "var.h"

#include <iostream>

#define DEBUG

using std::string;


class Number{
public:
    //Number(string n, string s):_value(n), _symbol(s){}
    Number(int s){
        tostring = std::to_string(s);
    }
    //string const _value;
    //string value(){
    //    for(int i=0; i<_value.size(); i++){
    //        if(_value[i]<47 || _value[i]>58)
    //            return _value+"false";
    //        else
    //            return _value;
    //    }
    //}
    string symbol(){return tostring;}
    string value(){return tostring;}
    // 防呆未做 字串 數字
    bool match(Number num){
        #ifdef DEBUG
        std::cout<< "Number Number match"<< tostring << "  " << num.value()<<std::endl;
        #endif
        if(tostring==num.value())
            return true;
        else
            return false;
    }

    bool match(Atom atom){
        #ifdef DEBUG
        std::cout<< "Number Atom match"<<tostring << "  " << atom.value()<<std::endl;
        #endif
        if(tostring==atom.value())
            return true;
        else
            return false;
    }

    bool match(Var var){
        _var = var.value();
        #ifdef DEBUG
        std::cout<< "Number Var match"<<tostring << "  " << var.value()<<std::endl;
        #endif
        if(_var[0]>64 && _var[0]<91)
            return true;
        else
            return false;
    }
private:
    string tostring;
    string _var;
};

#endif
