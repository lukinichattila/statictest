#include "fixture.h"
#include "operation.h"
#include<gtest/gtest.h>
#include<gmock/gmock.h> 

TEST_F(TestOperation,intsummatest){
   EXPECT_CALL(*mockadditionpointer, intsumma(_,_)).WillOnce(Return(3)); 
    int result=intoperation (1,2);
   EXPECT_EQ(3,result);
}
int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}