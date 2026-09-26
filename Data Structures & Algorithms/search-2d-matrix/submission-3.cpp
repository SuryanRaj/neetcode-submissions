class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m=matrix.size(),n=matrix[0].size();
       int l=0,u=(m*n)-1,md=0,f=0;
       while(l<=u)
       {
        md=(l+u)/2;
        int row=md/n,col=md%n;
        if(target<matrix[row][col])
        {
            u=md-1;
        }
        else if(target>matrix[row][col])
        {
            l=md+1;
        }
        else
        {
            f=1;
            break;
        }
       } 
       if(f==1)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
};
