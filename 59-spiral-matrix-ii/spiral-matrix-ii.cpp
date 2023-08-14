class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n,0));
        int startingRow=0;
        int endingRow=n-1;
        int startingCol=0;
        int endingCol=n-1;
        int count=1;
        int last=n*n;
        while(count<=last)
        {
            for(int i=startingCol;count<=last,i<=endingCol;i++)
            {
                mat[startingRow][i]=count++;
            }
            startingRow++;
            for(int i=startingRow;count<=last,i<=endingRow;i++)
            {
                mat[i][endingCol]=count++;
            }

            endingCol--;
            for(int i=endingCol;count<=last,i>=startingCol;i--){
                mat[endingRow][i]=count++;
            }
            endingRow--;
            for(int i=endingRow;count<=last, i>=startingRow;i--){
                mat[i][startingCol]=count++;
            }
            startingCol++;
        }
        return mat;
    }
};