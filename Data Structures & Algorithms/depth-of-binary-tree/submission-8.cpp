/**
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
    int maxDepth(TreeNode* root) {
       if(root==NULL)
    {
        return 0;
    }
    int c,z;
    c=maxDepth(root->left);
    z=maxDepth(root->right);
    if(c==z)
    {
        return z+1;
    }
    if(c>z)
    {
        return c+1;
    }
    else
    {
        return z+1;
    }
    }
};
