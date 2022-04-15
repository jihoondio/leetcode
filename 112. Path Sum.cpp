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
    bool traverse( TreeNode * node, int curr_sum, int sum )
    {
        if ( node->left == NULL && node->right == NULL )
        {
            if ( curr_sum + node->val == sum ) 
                return true;
            else 
                return false;
        }

        if ( node->left != NULL )
        {
            if ( traverse( node->left, curr_sum + node->val, sum ) == true )
                return true;
        }
        if ( node->right != NULL )
        {
            if ( traverse( node->right, curr_sum + node->val, sum ) == true )
                return true;
        }

        return false;
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if ( root != NULL )
            return traverse( root, 0, sum );
        else
            return false;
    }
};
