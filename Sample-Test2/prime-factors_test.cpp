#include "pch.h"
#include "../cra_0624/prime-factors.cpp"
#include <vector>
using namespace std;

class TestFixture : public ::testing::Test {
public:

private:
	PrimeFactor prime;
};

TEST_F(TestFixture, PrimeTest) {
	EXPECT_EQ(1, 1);
}

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}