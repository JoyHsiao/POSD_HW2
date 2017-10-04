#ifndef VARIABLE_H
#define VARIABLE_H

#include "container.h"

class Variable:public Container{
public:
    Variable(string s):Container(s){}
    bool match(Container num ){
        bool ret = num._assignable;
        
        #ifdef DEBUG                                                                       
        std::cout<< "Variable match: "<< _value << "  " << num._value<< " "<< num.name << " assign=" << _assignable << std::endl;
        #endif                                                                             
       
        if(num.name != "variable" && _assignable==false){
            #ifdef DEBUG
            std::cout<< "Variable match: "<< num.name << std::endl;
            #endif
            return false;
        }
        else{
            if((ret==false &&_assignable==false)&& (_value!= num._value)){
                #ifdef DEBUG
                std::cout<< "Variable match: false"<< std::endl;
                 #endif
                return false;
            }
        } 
              
        _value = num._value;;
        _assignable = false;
        num._assignable = false;
        #ifdef DEBUG
        std::cout<< "Variable match: true. "<< num._value <<" "<< _value <<" "<< num.name<<" "<< num._assignable<< " Vassign: "<<_assignable<< std::endl;
        #endif                                                                             
        
        return true;
    }

private:
};


#endif
