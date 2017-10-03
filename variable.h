#ifndef VAR_H
#define VAR_H
#include <string>

#include <iostream>

using std::string;

class Variable{
public:
    //Number(string n, string s):_value(n), _symbol(s){}
    Variable(string s):_value(s),_symbol(s){}
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

   // bool match(Var num){
   // //    std::cout<< tostring << "  " << num.value();
   //     if(tostring==num.value())
   //         return true;
   //     else
   //         return false;
   // }
private:
    string _value;
    string const _symbol;
};


#endif
