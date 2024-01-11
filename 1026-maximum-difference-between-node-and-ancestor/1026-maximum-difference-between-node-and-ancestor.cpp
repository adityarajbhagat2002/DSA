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
    int ans=0;
    int maxAncestorDiff(TreeNode* root) {
       find(root, root->val, root->val);
        return ans;
        
        
        
    }
    
    void find(TreeNode* curr, int maxEle ,int minEle){
     if(!curr)return ;
        ans= max(ans,max(abs(curr->val-maxEle), abs(curr->val-minEle)));
        maxEle=max(curr->val,maxEle);
        minEle= min(curr->val, minEle);
        find(curr->left,maxEle ,minEle);
        find(curr->right,maxEle , minEle);
        
        
    }
    
    
};
