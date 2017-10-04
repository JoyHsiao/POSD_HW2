#ifndef NUMBER_H
#define NUMBER_H

#include "container.h"

class Number:public Container{
public:
    Number(int s):Container(s){}
    //    for(int i=0; i<_value.size(); i++){
    //        if(_value[i]<47 || _value[i]>58)
    //            return _value+"false";
    //        else
    //            return _value;
    //    }
    //}
    bool match(Container num){
        #ifdef DEBUG
        std::cout<< "Number "<<__FUNCTION__ <<": "<< _value << "  " << num.name << " "<< num.value()<<std::endl;
        #endif
        if(num.name == "number" && _value==num.value() || num.name=="variable")
            return true;
        else
            return false;
    }


private:
};

#endif
