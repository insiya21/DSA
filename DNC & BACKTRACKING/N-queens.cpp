class Solution {
public:
    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> lowerDiagnolCheck;
    unordered_map<int,bool> upperDiagnolCheck;
    void storeSolution(vector<vector<string>> &ans,vector<vector<char> > &board,int n ) {
        vector<string> tempAns;
        for(int i=0; i<n; i++) {
            string output = "";
            for(int j=0; j<n; j++) {
                output.push_back(board[i][j]);
            }
            tempAns.push_back(output);
        }
        ans.push_back(tempAns);
    }
    bool isSafe(int row, int col, vector<vector<char> > &board) {
        //check for row
        if(rowCheck[row] == true) {
            return false;
        }
        //check for upper diagnol
         if(upperDiagnolCheck[row-col] == true) {
            return false;
        }
        //check lower diagnol 
        if(lowerDiagnolCheck[row+col] == true) {
            return false;
        }  
        return true;
    }
    void solve(int n, vector<vector<char> > &board, vector<vector<string>> &ans, int col ) {
        //base case
        if(col >= n ) {
            storeSolution(ans, board, n);
            return;
        }
        //1 case hum solve karenge and baaki recursion
        for(int row=0; row<n; row++) {
            if(isSafe(row,col,board)) {
                board[row][col] = 'Q';
                rowCheck[row] = true;
                lowerDiagnolCheck[row+col] = true;
                upperDiagnolCheck[row-col] = true;
                //recursion
                solve(n,board,ans,col+1);
                //backtrack 
                board[row][col] = '.';
                rowCheck[row] = false;
                lowerDiagnolCheck[row+col] = false;
                upperDiagnolCheck[row-col] = false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<char> > board(n, vector<char>(n,'.'));
        int col = 0;
        solve(n,board,ans,col);
        return ans;
    }
};