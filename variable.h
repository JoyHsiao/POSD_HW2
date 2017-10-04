#ifndef VAR_H
#define VAR_H

#include "container.h"

class Variable:public Container{
public:
    Variable(string s):Container(s){}
    bool match(Container num ){
        bool ret = num._assignable;
        
        #ifdef DEBUG                                                                       
        std::cout<< "Variable match: "<< _value << "  " << num.value()<< " "<< num.name << " assign=" << _assignable << std::endl;
        #endif                                                                             
       
        if(num.name != "variable" && !ret){
            #ifdef DEBUG
            std::cout<< "Variable match: "<< num.name << std::endl;
            #endif
            return false;
        }
        else{
            if((!ret || !_assignable) || (!ret ||!_assignable)&& _value!= num._value){
                #ifdef DEBUG
                std::cout<< "Variable match: false"<< std::endl;
                 #endif
                return false;
            }
        } 
              
        _value = num._value;;
        _assignable = false;
        #ifdef DEBUG
        std::cout<< "Variable match: true. "<< num._value <<" "<< _value << std::endl;
         #endif
        
        return true;

        #ifdef DEBUG                                                                       
        std::cout<< "Variable match after: "<< _value << "  " << num.value()<< " "<< num.name << " assign=" << _assignable << std::endl;
        #endif                                                                             
    }

    //Number(string n, string s):_value(n), _symbol(s){}
    //Variable(string s):_value(s),_symbol(s){}
    //string value(){return _value;}
    //string symbol(){return _symbol;}




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
    //bool _assignable = true;
    //string _value;
    //string const _symbol;
};


#endif
