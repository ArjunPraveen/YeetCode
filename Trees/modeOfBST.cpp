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
    vector<int> modes;
    int count=1;
    int max=0;
    TreeNode* prev = nullptr;
    
public:
    vector<int> findMode(TreeNode* root) {
        if(root==nullptr)
            return modes;
        
        traverse(root);
        return modes;
    }
    void traverse(TreeNode* cur )
    {
        if(cur==nullptr)
            return;
        traverse(cur->left);
        cout<<cur->val<<" ";
        
        if (prev!=nullptr)
        {
            if(prev->val == cur->val)
                count++;
            else
                count=1;
        }
        if(count>max)
        {
            max=count;
            modes.clear();
            modes.push_back(cur->val);
        }
        else if(count==max)
            modes.push_back(cur->val);
        prev=cur;
        traverse(cur->right);
    }
};
