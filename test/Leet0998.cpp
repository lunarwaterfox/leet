#include <gtest/gtest.h>
#include <Leet0998.hpp>
#include <vector>

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

void fillArrayWithTree(vector<int> &v, TreeNode *tree) {
    if (tree->left) {
        fillArrayWithTree(v, tree->left);
    }

    v.push_back(tree->val);

    if (tree->right) {
        fillArrayWithTree(v, tree->right);
    }
}

TEST(Leet0998, example1) {
    vector<int> v = {4, 1, 3, -1, -1, 2};
    int val = 5;
    vector<int> b = {1, 4, 2, 3, 5};

    Solution s;

    TreeNode *root = buildTree(v, 0);
    root = s.insertIntoMaxTree(root, val);

    vector<int> rvl;
    fillArrayWithTree(rvl, root);
    ASSERT_TRUE(b == rvl);
}

TEST(Leet0998, example2) {
    vector<int> v = {5, 2, 4, -1, 1};
    int val = 3;
    vector<int> b = {2, 1, 5, 4, 3};

    Solution s;

    TreeNode *root = buildTree(v, 0);
    root = s.insertIntoMaxTree(root, val);

    vector<int> rvl;
    fillArrayWithTree(rvl, root);
    ASSERT_TRUE(b == rvl);
}


TEST(Leet0998, example3) {
    vector<int> v = {5, 2, 3, -1, 1};
    int val = 4;
    vector<int> b = {2, 1, 5, 3, 4};

    Solution s;

    TreeNode *root = buildTree(v, 0);
    root = s.insertIntoMaxTree(root, val);

    vector<int> rvl;
    fillArrayWithTree(rvl, root);
    ASSERT_TRUE(b == rvl);
}
