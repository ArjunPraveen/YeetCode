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
    int min=1e9;
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr)
            return 0;
        bfs(root, 1);
        return min;
    }
    
    void bfs(TreeNode* cur, int level)
    {
        if(cur==nullptr)
            return;
        if(cur->left==nullptr && cur->right==nullptr)
            min = level<min ? level:min;

        bfs(cur->left, level+1);
        bfs(cur->right, level+1);
    }
    
};
