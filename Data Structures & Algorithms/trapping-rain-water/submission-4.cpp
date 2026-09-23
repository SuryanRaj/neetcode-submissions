class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0,maxl=0,maxr=0,l=0,r=(height.size()-1);
        while(l!=r)
        {
            if(height[l]<height[r])
            {
                maxl=max(height[l],maxl);
                ans+=maxl-height[l];
                l++;
            }
            else
            {
                maxr=max(height[r],maxr);
                ans+=maxr-height[r];
                r--;
            }
        }
        return ans;
        
    }
};