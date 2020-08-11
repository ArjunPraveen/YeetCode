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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        //cout<<root->val;
        stack<TreeNode*> first,second;
        first.push(root);
        if(root==nullptr)
            return ans;
        while(!first.empty())
        {
            TreeNode* cur = first.top();
            first.pop();
            second.push(cur);
            if(cur->left!=nullptr)
                first.push(cur->left);
            if(cur->right!=nullptr)
                first.push(cur->right);
                
        }
        while(!second.empty())
        {
            cout<<second.top()->val<<" ";
            ans.push_back(second.top()->val);
            second.pop();            
        }

        return ans;
    }
};
