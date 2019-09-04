/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if ( !root ) return NULL;

        TreeNode* node = NULL;

        if ( root->val == val ) return root;
        if ( node = searchBST( root->left, val ) ) return node;
        if ( node = searchBST( root->right, val ) ) return node;
        return NULL;
    }
};
