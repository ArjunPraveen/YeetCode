#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
     TreeNode(int data)
     {
         this->val = data;
         left=nullptr;
         right=nullptr;
     }

};

// check whether a binary tree is a bst or not 

class Solution {
private: 
    vector<int> a;
public:
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)
            return true;
        inorder(root);
        
        for(int i=0; i<a.size()-1; i++)
        {
            if(a[i]>=a[i+1])
                return false;
        }
        return true;
    }
    
    void inorder(TreeNode* cur)
    {
        if(cur==nullptr)
            return;
        inorder(cur->left);
        //cout<<cur->val<<" ";
        a.push_back(cur->val);
        inorder(cur->right);
    }
};


int main ()
{
    Solution s;
    struct TreeNode* root = new TreeNode(1);
    //root->val = 1;
    root->right= new TreeNode(3);
    root->right->left = new TreeNode(4);
    cout<<endl;
    cout<<s.isValidBST(root);
    return 0;
}
