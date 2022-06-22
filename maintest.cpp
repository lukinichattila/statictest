#include "fixture.h"
#include "operation.h"
#include<gtest/gtest.h>
#include<gmock/gmock.h> 
extern double pi;
TEST_F(TestOperation,intsummatest){
   EXPECT_CALL(*mockadditionpointer, intsumma(1,2)).WillOnce(Return(3)); 
    int result=intoperation (1,2);
   EXPECT_EQ(3,result);
}
TEST_F(TestOperation,pioperation){
    pi=1;
   EXPECT_CALL(*mockadditionpointer, floatsumma(_,_)).WillOnce(Return(2)); 
    double result=pioperation (2);
   EXPECT_EQ(5.14,result);
}
int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}