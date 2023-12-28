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
    int ans=INT_MAX;
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        find(root,1);
        return ans;        
    }
    void find(TreeNode* r,int a)
    {
        if(!r)
            return;
        if(!r->right&&!r->left)
        {
            ans=min(ans,a);
            return;
        }
        find(r->right,a+1);
        find(r->left,a+1);
    }
};