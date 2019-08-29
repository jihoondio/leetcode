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
    void tree_path( TreeNode* node, string path, vector<string> & result )
    {
        if ( node == NULL ) return;

        if ( !path.empty() )
        {
            path += "->";
        }
        path += std::to_string( node->val );

        if ( node->left == NULL && node->right == NULL )
        {
            result.push_back( path );
            return;
        }

        tree_path( node->left, path, result );
        tree_path( node->right, path, result );
    }

    vector<string> binaryTreePaths( TreeNode* root ) 
    {
        vector<string> result;
        string path;
        tree_path( root, path, result );
        return result;
    }
};
