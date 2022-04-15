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
            traversal(node->left, values);
            values.push_back(node->val);
            traversal(node->right, values);
        }
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> values;
        traversal(root, values);
        return values;
    }
};