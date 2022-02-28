// https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    bool helper(TreeNode* l, TreeNode* r)
    {
        if(!l || !r) return l == r;
        if(l->val != r->val) return false;
        
        bool left = helper(l->left,r->right);
        bool right = helper(l->right,r->left);
        
        return (left && right);
    }
    
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};
