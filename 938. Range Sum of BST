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
    void _rangeSumBST( TreeNode* node, int L, int R, int & sum )
    {
        if ( !node ) return;

        if ( L <= node->val && node->val <= R )
        {
            sum += node->val;
        }

        _rangeSumBST( node->left, L, R, sum );
        _rangeSumBST( node->right, L, R, sum );
    }

    int rangeSumBST( TreeNode* root, int L, int R ) 
    {
        int sum = 0;
        _rangeSumBST( root, L, R, sum );
        return sum;
    }
};
