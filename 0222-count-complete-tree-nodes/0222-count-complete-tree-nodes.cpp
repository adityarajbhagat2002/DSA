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
    int countNodes(TreeNode* root) {
        if(root == NULL)return 0;
        int lh=findleftheight(root);
        int rh=findrightheight(root);
        
        if(lh==rh) return (1<<lh)-1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
        
        
    }
    
    int findleftheight(TreeNode* node){
        int heightCount=0;
        while(node){
            heightCount++;
            node=node->left;
            
            
        }
        return heightCount;
    }
    
     int findrightheight(TreeNode* node){
        int heightCount=0;
        while(node){
            heightCount++;
            node=node->right;
            
            
        }
        return heightCount;
    }
    
    
    
};