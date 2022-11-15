class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        stack<TreeNode*> st;
        TreeNode* last = NULL;
        while (root || !st.empty()) {
            if (root) {
                st.push(root);
                root = root -> left;
            } else {
                TreeNode* node = st.top();
                if (node -> right && last != node -> right) {
                    root = node -> right;
                } else {
                    postorder.push_back(node -> val);
                    last = node;
                    st.pop();
                }
            }
        }
        return postorder;
    }
};