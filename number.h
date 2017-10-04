#ifndef NUMBER_H
#define NUMBER_H

#include "container.h"

class Number:public Container{
public:
    Number(int s):Container(s){}
    bool match(Container num){
        #ifdef DEBUG
        std::cout<< "Number "<<__FUNCTION__ <<": "<< _value <<" "<< num._value<< " "<< num._symbol<< "  " << num.name << " assign:"<< num._assignable<<std::endl;
        #endif
        if(num.name == "number" && _value==num.value() || num.name=="variable")
            return true;
        else
            return false;
    }


private:
};

#endif
