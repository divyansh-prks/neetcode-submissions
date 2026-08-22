/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
private:
    int getHeight(TreeNode* root) {
        if (!root) {
            return 0; // Base case: height of null node is 0
        }
        
        int leftHeight = getHeight(root->left); 
        if (leftHeight == -1) return -1;
        
        int rightHeight = getHeight(root->right); 
        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1) {
            return -1; // Unbalanced flag
        }

        return 1 + max(leftHeight, rightHeight); // Return actual height
    }

public:
    bool isBalanced(TreeNode* root) {
        return getHeight(root) != -1;
    }
};