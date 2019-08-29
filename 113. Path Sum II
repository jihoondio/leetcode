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
    void traverse( TreeNode * node, int curr_sum, 
                   vector<int> track, vector<vector<int>> & result, int sum )
    {
        if ( node == NULL ) return;

        track.push_back( node->val );

        if ( node->left == NULL && node->right == NULL )
        {
            if ( curr_sum + node->val == sum )
            {
                result.push_back( track );
            }
        }

        traverse( node->left, curr_sum + node->val, track, result, sum );

        traverse( node->right, curr_sum + node->val, track, result, sum );
    }

    vector<vector<int>> pathSum( TreeNode* root, int sum )
    {
        vector<vector<int>> result;
        vector<int> track;

        traverse( root, 0, track, result, sum );

        return result;
    }
};
