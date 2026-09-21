class Solution {

public:

int search(vector<int>& nums, int target) 
{
int l=0, fi=0, u=nums.size()-1;

while(l<=u)

{

int m=l+(u-l)/2;

if(nums[m]<target)

{

l=m+1;

}

else if (nums [m]>target)

{

u=m-1;

}

else

{

return m;

}

}

return -1;

}

};