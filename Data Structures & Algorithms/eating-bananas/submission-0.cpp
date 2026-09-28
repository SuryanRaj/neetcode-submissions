class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int low=1,high=*max_element(piles.begin(),piles.end());
      while(low<high)
      {
       int mid=(low+high)/2;
        long long totalhrs=0;
        for(int i=0;i<piles.size();i++)
        {
            totalhrs+=ceil((double)piles[i]/mid);
        }
        if(totalhrs<=h)
        {
            high=mid;
        }
        if(totalhrs>h)
        {
            low=mid+1;
        }
      }
      return low;  
    }
};
