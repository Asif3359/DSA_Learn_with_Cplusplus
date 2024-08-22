/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool checkTree(TreeNode* root) {

        if(root == NULL)
        {
            return false ;
        }
        if(!root->left || !root->right)
        {
            return false ;
        }
        if(root->val != root->left->val + root->right->val )
        {
            return false ;
        }

        bool l = checkTree(root->left);
        bool r = checkTree(root->right);

        return (l||r)==false ;

        return true ;
    }
};

