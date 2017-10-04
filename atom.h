#ifndef ATOM_H
#define ATOM_H

#include "container.h"


class Atom: public Container{
public:
    Atom(string s):Container(s){}

    bool match(Container num){
        #ifdef DEBUG
        std::cout<< "Atom match: "<< _value << "  " << num._value<< " "<< num.name <<" assign:"<< num._assignable<< std::endl;
        #endif
        if(num.name == "number"){
            #ifdef DEBUG
            std::cout<< "Atom match: "<< num.name << std::endl;
            #endif
            return false;
        }
        else if(num.name == "atom" && _value != num._value){
            #ifdef DEBUG
            std::cout<< "Atom match: "<< num.name << std::endl;
            #endif
            return false;
        }
        else{
            bool ret = num._assignable;
            #ifdef DEBUG
            std::cout<< "Atom match: "<< num.name << " assig:" <<  ret<<" "<< num._value << " " << _value<< std::endl;
            #endif
            if(ret==false && num._value!=_value){
                #ifdef DEBUG
                std::cout<< "Atom match: false"<< std::endl;
                 #endif
                return false;
            }
            else{
                num._value =_value;
                num._assignable = false;
                #ifdef DEBUG
                std::cout<< "Atom match: true. "<< num._value <<" "<< _value <<" " << num.name << " assign: " << num._assignable << std::endl;
                 #endif
            }
        }               
        return true;
    }

private:
};


#endif
