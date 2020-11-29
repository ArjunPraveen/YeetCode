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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        if(root==nullptr)
        {
            return ans;
        }
        // s.push(root);
        TreeNode* cur = root;
        while(cur!=nullptr || !s.empty())
        {
            while(cur!=nullptr)
            {
                s.push(cur);
                cur = cur->left;
            }
            cur = s.top();
            s.pop();
            cout<<cur->val<<" ";
            ans.push_back(cur->val);
            
            cur= cur->right;
        }
        return ans;
    }
};
