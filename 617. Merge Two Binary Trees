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
    void merge( TreeNode* t1, TreeNode* t2, TreeNode **t3 )
    {
        if ( t1 == NULL && t2 == NULL ) return;

        TreeNode* _t3 = new TreeNode( 0 );

        if ( t1 != NULL )
        {
            _t3->val += t1->val;
        }
        if ( t2 != NULL )
        {
            _t3->val += t2->val;
        }

        *t3 = _t3;

        merge( t1 ? t1->left : NULL,  t2 ? t2->left : NULL,  &( _t3->left ) );
        merge( t1 ? t1->right : NULL, t2 ? t2->right : NULL, &( _t3->right ) );
    }

    TreeNode* mergeTrees( TreeNode* t1, TreeNode* t2 ) 
    {
        if ( t1 == NULL && t2 == NULL )
        {
            return NULL;
        }

        auto * t3 = new TreeNode( 0 );

        if ( t1 != NULL )
        {
            t3->val += t1->val;
        }
        if ( t2 != NULL )
        {
            t3->val += t2->val;
        }

        merge( t1 ? t1->left : NULL, t2 ? t2->left : NULL, &t3->left );
        merge( t1 ? t1->right : NULL, t2 ? t2->right : NULL, &t3->right );

        return t3;
    }
};
