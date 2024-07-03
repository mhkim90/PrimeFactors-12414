#include "pch.h"
#include "../cra_0624/prime-factors.cpp"

class TestFixture : public ::testing::Test {
public:

private:
	PrimeFactor prime;
};

TEST_F(TestFixture, PrimeTest) {
	EXPECT_EQ(1, 1);
}

TEST(PrimeTest, Test) {
	EXPECT_EQ(1, 1);
}