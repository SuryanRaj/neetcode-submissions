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
int maxd=0;
int ht(TreeNode* rt)
{
    if(rt==NULL)
    {
        return 0;
    }
    int l,r;
    l=ht(rt->left);
    r=ht(rt->right);

     maxd=max(maxd,l+r);

    return max(l,r)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        ht(root);
        return maxd;
    }
};