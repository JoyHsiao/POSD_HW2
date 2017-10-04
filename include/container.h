#ifndef CONTAINER_H
#define CONTAINER_H
//#include <string>

#include <iostream>

#define DEBUG

using std::string;


class Container{
public:
    Container(int s){
        _value = std::to_string(s);
        _symbol = std::to_string(s);
        name = "number";
    #ifdef DEBUG
        std::cout<< __FUNCTION__<<": "<< name << std::endl;
    #endif
    }
    Container(string s):_value(s), _symbol(s){
        if(_symbol[0]>64 && _symbol[0]<91)
            name = "variable";
        else
            name = "atom";
    #ifdef DEBUG
        std::cout<< __FUNCTION__<<": "<< _symbol[0] <<" "<< _value[0]<< " "<< name << std::endl;
    #endif
    }
    string symbol(){
return _symbol;}
    string value(){
return _value;}
    string _value;
    string _symbol;
    string name;
    bool _assignable=true;
};

#endif
