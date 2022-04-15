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
    int traverse( TreeNode * node, int depth )
    {
        if ( node == nullptr ) return depth;

        int r = traverse( node->right, depth + 1 );
        int l = traverse( node->left, depth + 1 );

        if ( r > l ) 
            return r;
        else 
            return l;
    }

    int maxDepth( TreeNode* root ) 
    {
        TreeNode * node = root;
        if ( node == nullptr ) return 0;

        int r = traverse( node->right, 1 );
        int l = traverse( node->left, 1 );
        if ( r > l )
            return r;
        else
            return l;
    }
};
