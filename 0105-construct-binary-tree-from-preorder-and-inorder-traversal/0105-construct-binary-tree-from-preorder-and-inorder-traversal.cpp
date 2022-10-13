class Solution {
public:
    TreeNode* constructTree(int i,int j,int &ind,vector<int> &preorder,vector<int> &inorder,unordered_map<int,int> &mp)
    {
        if(i>j)
        {
            return NULL;
        }
        int rootVal=preorder[ind];
        ind+=1;

        TreeNode *root=new TreeNode(rootVal);
        
        int in=mp[rootVal];
        root->left=constructTree(i,in-1,ind,preorder,inorder,mp);
        root->right=constructTree(in+1,j,ind,preorder,inorder,mp);
        return root;
    }

        
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
     
        unordered_map<int,int> mp;
        
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int ind=0;
        return constructTree(0,preorder.size()-1,ind,preorder,inorder,mp);
        
        
    }
};