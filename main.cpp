#include <iostream>
#include <vector>
#include <Leet0998.hpp>

using namespace std;
using namespace Leet0998;

TreeNode *buildTree(vector<int> &v, int index) {
    if (index >= v.size() ||  v[index] == -1) {
        return NULL;
    }

    TreeNode *node = new TreeNode(v[index]);

    TreeNode *left = buildTree(v, index * 2 + 1);
    TreeNode *right = buildTree(v, index * 2 + 2);

    node->left = left;
    node->right = right;

    return node;
}

void printTree(TreeNode *tree) {
    if (tree->left) {
        printTree(tree->left);
    }

    cout << tree->val << " ";

    if (tree->right) {
        printTree(tree->right);
    }
}

int main(int argc, char *argv[]) {
    vector<int> v = {4, 1, 3, -1, -1, 2};
    int val = 5;
    vector<int> b = {1, 4, 2, 3, 5};

    Solution s;

    TreeNode *root = buildTree(v, 0);
    printTree(s.insertIntoMaxTree(root, val));

    return 0;
}
