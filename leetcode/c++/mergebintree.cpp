/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * https://leetcode.com/problems/merge-two-binary-trees/description/
 */

TreeNode* recursiveMerge(TreeNode* t1, TreeNode* t2){
    int val = NULL;
    if(t1 && t2){
        val = t1->val + t2->val;
    } else if(t1 || t2){
        val = t1 ? t1->val : t2->val;
    } else {
        return NULL; 
    }
    TreeNode* ret = new TreeNode(val);
    ret->right = recursiveMerge(t1 ? t1->right : NULL, t2 ? t2->right :NULL);
    ret->left = recursiveMerge(t1 ? t1->left: NULL, t2 ? t2->left : NULL);
    return ret;
}
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        return recursiveMerge(t1, t2);
    }
};