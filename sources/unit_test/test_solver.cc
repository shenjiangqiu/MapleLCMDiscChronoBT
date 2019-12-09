#include<gtest/gtest.h>
#include<gtest/gtest-death-test.h>


#include<iostream>

class FooTest:public ::testing::Test{
    protected:
    FooTest(){
        //std::cout<<"construct\n";
    }
    ~FooTest(){
        //std::cout<<"distruct\n";
    }
    void SetUp() override{
        //std::cout<<"set up\n";
    }
    void TearDown() override{
        //std::cout<<"tear down\n";

    }
};

TEST_F(FooTest,MethodEq){
    EXPECT_EQ(1,1);
    EXPECT_EQ(1,2);
}
TEST_F(FooTest,MethodNeq){
    EXPECT_NE(1,1);
    EXPECT_NE(1,2);
}

int main(int argc,char**argv){
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
