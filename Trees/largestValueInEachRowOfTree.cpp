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
private:
    vector<int> ans;
public:
    vector<int> largestValues(TreeNode* root) {
         
        if(root==nullptr)
            return ans;
        TreeNode* cur;
        bfs(root, ans, 0);
        return ans;
    }
    void bfs(TreeNode* cur, vector<int> &ans, int level)
    {
        if(cur==nullptr)
            return;
        if(level == ans.size())
        {
            ans.push_back(cur->val);
        }
        else
        {
            ans[level] = ans[level] < cur->val ? cur->val : ans[level];
        }
        bfs(cur->left, ans, level+1);
        bfs(cur->right, ans, level+1);
    }
};
