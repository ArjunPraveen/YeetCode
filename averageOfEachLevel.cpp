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
    double sum;
    int count;
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> average;
        average.push_back(root->val);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            size = q.size();
            count=0;
            sum=0;
            for(int i=0; i<size; i++)
            {
                cur = q.front();
                q.pop();
                if(cur->left!=nullptr)
                {
                    q.push(cur->left);
                    sum += (double)(cur->left->val);
                    count++;
                }
                if(cur->right!=nullptr)
                {
                    q.push(cur->right);
                    sum += (double)(cur->right->val);
                    count++;
                }
            }
            if(count!=0)
            {
                sum = sum/count;
                average.push_back(sum);
            }
            
        }
        return average;
        
    }
};
