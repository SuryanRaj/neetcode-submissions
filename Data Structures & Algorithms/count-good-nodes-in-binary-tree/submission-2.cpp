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
    int goodNodes(TreeNode* root) {
        int c=1;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return 0;
        }
        q.push(root);
        while(q.size()>0)
        {
            TreeNode* curr=q.front();
            q.pop();
             if(curr->left!=NULL)
             {
                if(curr->left->val>=curr->val)
                {
                    c++;
                }
                 curr->left->val=max(curr->left->val,curr->val);
                q.push(curr->left);
             }
             if(curr->right!=NULL)
             {
                if(curr->right->val>=curr->val)
                {
                    c++;
                }
                curr->right->val=max(curr->right->val,curr->val);
                q.push(curr->right);
             }
        }
        return c;
    }
};