using namespace std;

namespace Leet0998 {

// Definition for a binary tree node.
typedef struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
} TreeNode;

class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
          TreeNode *node = new TreeNode(val);
          TreeNode *cur = root;
          TreeNode *parent = NULL;

          while(cur) {
              if (cur->val < val) {
                  node->left = cur;
                  break;
              }

              parent = cur;
              cur = cur->right;
          }

          if (parent) {
              parent->right = node;
              return root;
          } else {
              return node;
          }
    }
};


}
