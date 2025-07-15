#include <queue>

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (!root) {
            return true; // An empty tree is considered an even-odd tree.
        }

        std::queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            int prevValue = (level % 2 == 0) ? INT_MIN : INT_MAX;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                if (level % 2 == 0) { // For even levels, values should be strictly increasing.
                    if (node->val % 2 == 0 || node->val <= prevValue) {
                        return false;
                    }
                } else { // For odd levels, values should be strictly decreasing.
                    if (node->val % 2 == 1 || node->val >= prevValue) {
                        return false;
                    }
                }

                prevValue = node->val;

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }

            level++;
        }

        return true;
    }
};
