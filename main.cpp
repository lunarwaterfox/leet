#include <iostream>
#include <vector>
#include <Leet0997.hpp>

using namespace std;

int main(int argc, char *argv[]) {
    vector<vector<int> > trust = {};

    Leet0997::Solution s;
    int v = s.findJudge(1, trust);



    cout << "result: " << v << endl;

    return 0;
}
