#ifndef NUMBER_H
#define NUMBER_H
#include <string>
#include <sstream>

#include <iostream>

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
    bool match(Number num){
        std::cout<< tostring << "  " << num.value();
        if(tostring==num.value())
            return true;
        else
            return false;
    }
private:
    string tostring;
};


#endif
