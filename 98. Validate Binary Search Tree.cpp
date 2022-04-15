/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isValid(struct TreeNode* node, struct TreeNode* min, struct TreeNode* max) {
    if (!node) 
        return true;
    
    if (min) {
        if (node->val <= min->val) 
            return false;    
    }
    if (max) {
        if (max->val <= node->val) 
            return false;    
    }
    
    return isValid(node->left, min, node) &&
           isValid(node->right, node, max);
}

bool isValidBST(struct TreeNode* root){
    return isValid(root, NULL, NULL);
}