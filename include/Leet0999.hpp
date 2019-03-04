#include <vector>

using namespace std;

namespace Leet0999 {

class Solution {
public:
    void findRook(vector<vector<char>>& board, int *x, int *y) {
        for (int i = 0; i < board.size(); ++i) {
            vector<char> v = board[i];

            for (int j = 0; j < board.size(); ++j) {
                char c = v[j];

                if (c == 'R') {
                    *x = i;
                    *y = j;
                    return;
                }
            }
        }
    }

    int goDirection(vector<vector<char>>& board, int x, int y, int offsetX, int offsetY) {
        int len = board.size();

        while (x >= 0 && x < len && y >= 0 && y < len) {
            if (board[x][y] == 'p') {
                return 1;
            } else if (board[x][y] == 'B') {
                return 0;
            }

            x += offsetX;
            y += offsetY;
        }

        return 0;
    }

    int numRookCaptures(vector<vector<char>>& board) {
        int i = 0;
        int j = 0;

        findRook(board, &i, &j);

        int up = goDirection(board, i, j, 1, 0);
        int down = goDirection(board, i, j, -1, 0);
        int left = goDirection(board, i, j, 0, -1);
        int right = goDirection(board, i, j, 0, 1);

        return up + down + left + right;
    }
};

}
