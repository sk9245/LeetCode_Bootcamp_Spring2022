// https://leetcode.com/problems/validate-binary-search-tree/

class Solution {
public:
    bool ans(TreeNode* root, TreeNode* low,TreeNode* high){
        if(root == NULL)
            return true;
        if((low != NULL and root->val <= low->val) || (high != NULL and root->val >= high -> val))
            return false;
        return ans(root->left, low, root) and ans(root->right, root, high);
        
       
    }
    bool isValidBST(TreeNode* root) {
        return ans(root, NULL, NULL);
    }
};
