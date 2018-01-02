/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * https://leetcode.com/problems/find-bottom-left-tree-value/description/
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        while(root->left){
            root = root->left;
        }
        return root->val;
    }
};