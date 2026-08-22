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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result; // Handle empty tree edge case

        queue<TreeNode*> q; // Queue must store TreeNode pointers
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < size; i++) {
                TreeNode* el = q.front(); // 'el' is a TreeNode pointer
                q.pop();

                currentLevel.push_back(el->val); // Store the value

                if (el->left) {
                    q.push(el->left); // Push left child pointer
                } 
                if (el->right) {
                    q.push(el->right); // Push right child pointer
                }
            }
            result.push_back(currentLevel); // Add the completed level to result
        }

        return result; // Don't forget to return the 2D vector!
    }
};