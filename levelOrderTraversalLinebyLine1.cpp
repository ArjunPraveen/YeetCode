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
    TreeNode* cur;
    int size;
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);

        vector<int> initial ;
        initial.push_back(root->val);
        ans.push_back(initial);
        
        while(!q.empty())
        {
            size = q.size();
            vector<int> level;
            for(int i=0; i<size; i++)
            {
                cur = q.front();
                q.pop();
                if(cur->left!=nullptr) 
                {
                    q.push(cur->left);
                    level.push_back(cur->left->val);
                }
                if(cur->right!=nullptr) 
                {
                    q.push(cur->right);
                    level.push_back(cur->right->val);
                }
                
                    
            }
            if(level.size()!=0)
                ans.push_back(level);
        }
        vector<vector<int>> final;
        for(int i=0; i<ans.size(); i++)
        {
            final.push_back(ans[ans.size()-i-1]);
        }
        
        return final;
    }
};
