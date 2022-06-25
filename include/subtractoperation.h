#ifndef SUBTRACTOPERATION_H
#define SUBTRACTOPERATION_H
#include "substract.h"
class SubtractOperation{
    public:
        SubtractOperation()=default;
        virtual  int intsubtractoperation(int a,int b);
        virtual ~ SubtractOperation(){ };
};
#endif