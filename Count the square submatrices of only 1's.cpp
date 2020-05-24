class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int squarecount=0;
        for(int i=1;i<matrix.size();i++)
        {
            if(matrix[i][0]==1)
                squarecount++;
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            if(matrix[0][j]==1)
                squarecount++;
        }
        for(int r=1;r<matrix.size();r++)
        {
            for(int c=1;c<matrix[0].size();c++)
            {
                if(matrix[r][c]==1)
                {
                    int sq=1+min(min(matrix[r-1][c-1],matrix[r-1][c]),matrix[r][c-1]);
                    squarecount+=sq;
                    matrix[r][c]=sq;
                }
            }
        }
        return squarecount;
    }
};
