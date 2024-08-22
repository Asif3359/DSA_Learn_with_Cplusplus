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
    int maxHight(TreeNode * root)
    {
        if(root == NULL)
        {
            return 0 ;
        }

        int l = maxHight(root->left);
        int r = maxHight(root->right);

        return max(l,r)+1;

    }
    int deepestLeavesSum(TreeNode* root) {

        int h = maxHight(root);
        int ans = 0 ;

        queue<pair<TreeNode*, int>> q ;
        q.push({root,1});

        while(!q.empty())
        {
            pair<TreeNode*, int> pr = q.front();
            TreeNode * node = pr.first;
            int level = pr.second ;
            q.pop();

            if(level == h)
            {
                ans += node->val;
            }

            if(node->left)
            {
                q.push({node->left,level+1});
            }
            if(node->right)
            {
                q.push({node->right,level+1});
            }

        }

        return ans ;

        
    }
};

