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
    void traverse( TreeNode* node, std::map<int, int> & m )
    {
        if ( !node ) return;

        m[ node->val ] = 1;

        traverse( node->left, m );
        traverse( node->right, m );
    }

    bool isUnivalTree( TreeNode* root ) 
    {
        if ( !root ) return true;

        std::map<int, int> m;
        m[ root->val ] = 1;
        traverse( root->left, m );
        traverse( root->right, m );

        if ( m.size() == 1 ) return true;
        else return false;
    }
};
