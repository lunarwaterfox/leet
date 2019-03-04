#include <gtest/gtest.h>
#include <Leet0997.hpp>
#include <vector>


TEST(Leet0997, sample) {
    Leet0997::Solution s;

    vector<vector<int> > trust1 = {{1, 2}};
    ASSERT_TRUE(s.findJudge(2, trust1) == 2);

    vector<vector<int> > trust2 = {{1,3},{2,3}};
    ASSERT_TRUE(s.findJudge(3, trust2) == 3);

    vector<vector<int> > trust3 = {{1,3},{2,3},{3,1}};
    ASSERT_TRUE(s.findJudge(3, trust3) == -1);

    vector<vector<int> > trust4 = {{1,2},{2,3}};
    ASSERT_TRUE(s.findJudge(3, trust4) == -1);

    vector<vector<int> > trust5 = {{1,3},{1,4},{2,3},{2,4},{4,3}};
    ASSERT_TRUE(s.findJudge(4, trust5) == 3);
}
