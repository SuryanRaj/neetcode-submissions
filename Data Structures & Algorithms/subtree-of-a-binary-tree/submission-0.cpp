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
    vector<int>arr;
    vector<int>subarr;
    const int NULL_MARKER = 1e9;
    void pr(TreeNode* rt)
    {
        if(rt==NULL)
        {
            arr.push_back(NULL_MARKER);
            return;
        }
        arr.push_back(rt->val);
        pr(rt->left);
        pr(rt->right);
    }
    void prr(TreeNode* subrt)
    {
        if(subrt==NULL)
        {
            subarr.push_back(NULL_MARKER);
            return;
        }
        subarr.push_back(subrt->val);
        prr(subrt->left);
        prr(subrt->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        pr(root);
        prr(subRoot);
        auto it=search(arr.begin(),arr.end(),subarr.begin(),subarr.end());
        if(it!=arr.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};