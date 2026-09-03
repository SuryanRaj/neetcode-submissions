class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<int> left(n);
        vector<int>right(n);

        int l=1;
        for(int i=0;i<nums.size();i++)
        {
            left[i]=l;
            l=l*nums[i];
        }
        
        int r=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            right[i]=r;
            r=r*nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            ans[i]=left[i]*right[i];
        }
        
        return ans;
    }
};
