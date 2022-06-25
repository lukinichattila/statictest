#ifndef MOCKSUBSTRACT_H
#define MOCKSUBSTRACT_H
#include"substract.h"
#include<gtest/gtest.h>
#include<gmock/gmock.h> 

class MockSubstract{
    public:
        MockSubstract()=default;
        MOCK_METHOD0(getresult, int());
        virtual  ~MockSubstract()=default; 
};
extern MockSubstract *mocksubstractpointer;
#endif