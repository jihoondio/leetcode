/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    void traversal(TreeNode *node, vector<int> &values)
    {
        if (node)
        {
            values.push_back(node->val);
            traversal(node->left, values);
            traversal(node->right, values);
        }
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> values;
        traversal(root, values);
        return values;
    }
};