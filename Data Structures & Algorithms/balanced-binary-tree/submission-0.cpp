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
    int ht(TreeNode* rt)
    {
        if(rt==NULL)
        {
            return 0;
        }
       int l=ht(rt->left);
       if(l==-1)
       return -1;
        int r=ht(rt->right);
        if(r==-1)
        return -1;

        if(abs(l-r)>1)
        {
            return -1;
        }

        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        
        if(ht(root)!=-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};