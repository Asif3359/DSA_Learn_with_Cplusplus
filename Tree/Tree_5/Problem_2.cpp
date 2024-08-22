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
    bool isUnivalTree(TreeNode* root) {

        if(root == NULL)
        {
            return true ;
        }

        if(root->left)
        {
            if(root->val != root->left->val)
            {
                return false ; 
            }
        }
        if(root->right)
        {
            if(root->val != root->right->val)
            {
                return false ; 
            }
        }

        bool l = isUnivalTree(root->left);
        bool r = isUnivalTree(root->right);

        return l&&r  ;

    }
};
// class Solution {
// public:
//     bool isUnivalTree(TreeNode* root) {
//         // Base case: if the node is null, return true (empty tree is univalued)
//         if (root == nullptr) {
//             return true;
//         }

//         // Check the left child
//         if (root->left) {
//             if (root->val != root->left->val) {
//                 return false;
//             }
//         }

//         // Check the right child
//         if (root->right) {
//             if (root->val != root->right->val) {
//                 return false;
//             }
//         }

//         // Recursively check left and right subtrees
//         bool leftUnivalued = isUnivalTree(root->left);
//         bool rightUnivalued = isUnivalTree(root->right);

//         // Return true only if both subtrees are univalued
//         return leftUnivalued && rightUnivalued;
//     }
// };
