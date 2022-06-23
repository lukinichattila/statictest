#include<iostream>
#include <string>
#include "operation.h"
#include "subtractoperation.h"

int main(){
double a=5.0;
double result=pioperation(a);
std::cout<<"rezultat"<<result;
SubtractOperation subsop;
result=subsop.intsubtractoperation(5,6);
std::cout<<"rezultat"<<result;

}