#include <vector>
#include <unordered_map>

using namespace std;

namespace Leet0997 {

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<vector<int> > graph(2, vector<int>(N + 1));

        for (const vector<int> v: trust) {
            int person = v[0];
            int trusted = v[1];

            ++graph[0][trusted];
            ++graph[1][person];
        }

        for (int i = 1; i <= N; ++i) {
            if (graph[0][i] == N - 1 && graph[1][i] == 0) {
                return i;
            }
        }

        return -1;
    }
};

}
