#ifndef NUMBER_H
#define NUMBER_H

#include "container.h"

class Number:public Container{
public:
    Number(int s):Container(s){}
    bool match(Container &num){
        #ifdef DEBUG
        std::cout<< "Number "<<__FUNCTION__ <<": "<< _value <<" "<< num._value<< " "<< num._symbol<< "  " << num.name << " assign:"<< num._assignable<<std::endl;
        #endif
        if(num.name == "number" && _value==num._value)
            return true;
        else if(num.name=="variable" && num._assignable==true)
        {
            num._value = _value;
            num._assignable = false;
        #ifdef DEBUG
        std::cout<< "Number match true. "<< _value <<" "<< num._value<< " "<< num._symbol<< "  " << num.name << " assign:"<< num._assignable<<std::endl;
        #endif
            return true;
        }
        else{
        #ifdef DEBUG
        std::cout<< "Number match false. "<< _value <<" "<< num._value<< " "<< num._symbol<< "  " << num.name << " assign:"<< num._assignable<<std::endl;
        #endif
            return false;
        }
    }
};

#endif
