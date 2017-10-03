#ifndef NUMBER_H
#define NUMBER_H
#include <string>

#include <iostream>

using std::string;

class Number{
public:
    Number(string n):_value(n){}
    string const _value;
    string value(){
        for(int i=0; i<_value.size(); i++){
            if(_value[i]<47 || _value[i]>58)
                return _value+"false";
            else
                return _value;
        }
    }
private:
    string num;
};


#endif
