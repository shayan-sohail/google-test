#include <gtest/gtest.h>
#include "../example.hpp"

struct example_tests : public ::testing::Test
{
    int a, b;

    virtual void SetUp() override
    {
        fprintf(stderr, "Setting up example_tests fixture variables to be used in example_tests\n");
        a = 4; b = 6;
    }

    virtual void TearDown() override
    {
        fprintf(stderr, "Clearing Local Variables from example_tests fixture\n");
    }
};

//_F will make this test the fixture and allows it to use the resoruces of example_tests struct
TEST_F(example_tests, add)
{
    EXPECT_EQ(a + b, add(a, b));
    EXPECT_EQ(a + b + 1, add(a, b));
}
