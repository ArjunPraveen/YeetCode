
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==nullptr)
        {
            return 0;
        }
        int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* cur = q.front();
            q.pop();
            if(cur->val >= L && cur->val <=R)
            {
                sum+=cur->val;
            }
            if(cur->left !=nullptr && cur->val > L)
            {
                q.push(cur->left);
            }
            if(cur->right !=nullptr && cur->val < R)
            {
                q.push(cur->right);
            }
            
        }
        return sum;
    }
};
