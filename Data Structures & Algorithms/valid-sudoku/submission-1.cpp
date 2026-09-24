class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>rows[9];
         unordered_set<char>cols[9];
          unordered_set<char>box[3][3];

          for(int i=0;i<9;i++)
          {
            for(int j=0;j<9;j++)
            {
                char curr=board[i][j];
                if(curr=='.')
                {
                    continue;
                }
                if(rows[i].count(curr)||cols[j].count(curr)||box[i/3][j/3].count(curr))
                {
                    return false;
                }
                rows[i].insert(curr);
                cols[j].insert(curr);
                box[i/3][j/3].insert(curr);
            }
          }
          return true;
    }
};
