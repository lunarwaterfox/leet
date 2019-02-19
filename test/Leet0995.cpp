#include <gtest/gtest.h>
#include <Leet0995.hpp>
#include <vector>

TEST(Leet0995, hello) {
    std::vector<int> A;
    Leet0995::Solution s;

    int value = s.minKBitFlips(A, 0);
    ASSERT_TRUE(value == 0);
}
