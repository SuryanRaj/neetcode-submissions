class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int f=0,r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==target)
                {
                    f=1;
                }
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