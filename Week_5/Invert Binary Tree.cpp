// https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};
