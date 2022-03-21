// https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
    
        if(root==nullptr) return ans;
        vector<int> level;
        queue<TreeNode*> q;
        
        q.push(root);
        TreeNode *node;
        while(!q.empty()){
            vector<int> level;
            int size=q.size();
            
            for(int i=0; i<size; i++){
                node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            
            ans.push_back(level);
            
        }
        return ans;
    }
};
