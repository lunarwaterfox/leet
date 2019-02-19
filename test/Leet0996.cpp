#include <gtest/gtest.h>
#include <Leet0996.hpp>
#include <vector>

TEST(Leet0996, hello) {
    std::vector<int> A;
    Leet0996::Solution s;
    
    int value = s.numSquarefulPerms(A);
    ASSERT_TRUE(value == 0);
}
