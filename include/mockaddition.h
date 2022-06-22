#include"addition.h"
#include<gtest/gtest.h>
#include<gmock/gmock.h> 
class MockAddition{
    public:
    MockAddition()=default;
      MOCK_METHOD2(intsumma, int(int,int));
      MOCK_METHOD2(floatsumma, double(double,double));
    virtual ~ MockAddition(){ };    
};
extern MockAddition *mockadditionpointer;