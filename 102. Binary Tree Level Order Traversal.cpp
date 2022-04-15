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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        queue<TreeNode *> q;
        TreeNode *node = root;

        q.push(node);

        while (q.empty() == false)
        {
            vector<int> vals;
            vector<TreeNode *> children;
            while (q.empty() == false)
            {
                auto p = q.front();
                if (p)
                {
                    vals.push_back(p->val);
                    children.push_back(p->left);
                    children.push_back(p->right);
                }
                q.pop();
            }

            for (auto p : children)
            {
                q.push(p);
            }

            if (!vals.empty())
                res.push_back(vals);
        }

        return res;
    }
};