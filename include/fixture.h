#ifndef FIXTURE_H
#define FIXTURE_H
#include "mockaddition.h"
#include "mocksubstract.h"

MockAddition *mockadditionpointer{nullptr};
MockSubstract *mocksubstractpointer{nullptr};

using ::testing::Mock;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

class TestOperation:public testing::Test{
    public:
    virtual void SetUp(){
        mockadditionpointer=new MockAddition();
        mocksubstractpointer=new MockSubstract();
    }
    virtual void TearDown(){
        delete mockadditionpointer;
        delete mocksubstractpointer;
    }
    virtual ~TestOperation() { };
};
#endif