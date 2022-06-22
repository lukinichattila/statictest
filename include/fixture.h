#ifndef FIXTURE_H
#define FIXTURE_H
#include "mockaddition.h"

MockAddition *mockadditionpointer{nullptr};

using ::testing::Mock;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;

class TestOperation:public testing::Test{
    public:
    virtual void SetUp(){
        mockadditionpointer=new MockAddition();
    }
    virtual void TearDown(){
        delete mockadditionpointer; 
    }
    virtual ~TestOperation() { };
};
#endif