class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(),n3=n1+n2,c=0;
        vector<int>ans(n3);
        double sum=0.0;
        for(int i=0;i<n1;i++)
        {
            ans[c]=nums1[i];
            c++;
        }
        int x=n1;
           for(int i=0;i<n2;i++)
        {
            ans[x]=nums2[i];
            x++;
        }
        sort(ans.begin(),ans.end());
        if(n3%2==0)
        {
             sum=(double)(ans[n3/2]+ans[(n3/2)-1])/2;
            return sum;
        }
        else
        {
           sum=ans[n3/2];
            return sum;
        }
        return 0.0;
    }
};