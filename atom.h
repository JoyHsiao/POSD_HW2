#ifndef ATOM_H
#define ATOM_H
#include <string>

#include <iostream>

#define DEBUG

using std::string;

//class Number;
//#include "Number.h"

class Atom{
public:
    //Number(string n, string s):_value(n), _symbol(s){}
    Atom(string s):_value(s),_symbol(s){}
    string value(){return _value;}
    string symbol(){return _symbol;}




    //string const _value;
    //string value(){
    //    for(int i=0; i<_value.size(); i++){
    //        if(_value[i]<47 || _value[i]>58)
    //            return _value+"false";
    //        else
    //            return _value;
    //    }
    //}

   // bool match(Number num){
   // #ifdef DEBUG
   //     std::cout<< _value << "  " << num.value();
   // #endif
   //     if(_value[0]>64 && _value[0]<91 && value==num.value()){
   //         return true;
   //     }
   //     else
   //         return false;   
   // }
private:
    string _value;
    string const _symbol;
};


#endif
