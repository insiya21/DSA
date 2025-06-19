#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isSafe(int newx, int newy,vector<vector<int>> &m,vector<vector<bool>> &visited, int n ) {
        if(newx < 0 || newy < 0 || newx >=n || newy >= n ) {
            //out of bound
            return false;
        }
        if(visited[newx][newy] == true) {
            //already visited
            return false;
        }
        if(m[newx][newy] == 0) {
            //blocked space
            return false;
        }
        //valid case
        return true;
    }
    void solve(vector<vector<int>> &m,vector<vector<bool>> &visited, int n,vector<string> &ans,
                int curr_x, int curr_y, int destx,int desty, string output) {
        //base case    
        if(curr_x==destx && curr_y==desty){
            ans.push_back(output);
            return;
        }                
        //1 case hum solve karenge , baaki recursion sambhal lega
        //UP
        //i,j -> i-1, j
        int newx = curr_x-1;
        int newy = curr_y;
        if(isSafe(newx,newy,m,visited,n)) {
            visited[newx][newy] = true;
            output.push_back('U');
            solve(m,visited,n,ans,newx,newy,destx,desty,output);
            output.pop_back();
            visited[newx][newy] = false;
        }
        //Down
        //i,j -> i+1,j
        newx = curr_x+1;
        newy = curr_y;
        if(isSafe(newx,newy,m,visited,n)) {
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"D");
            visited[newx][newy] = false;
        }
        //LEFT
        //i,j -> i,j-1
         newx = curr_x;
         newy = curr_y-1;
        if(isSafe(newx,newy,m,visited,n)) {
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"L");
            visited[newx][newy] = false;
        }
        //RIGHT
        //i,j, i,j+1
         newx = curr_x;
         newy = curr_y+1;
        if(isSafe(newx,newy,m,visited,n)) {
            visited[newx][newy] = true;
            solve(m,visited,n,ans,newx,newy,destx,desty,output+"R");
            visited[newx][newy] = false;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<bool> > visited(n, vector<bool>(n,0));
        int curr_x = 0;
        int curr_y = 0;
        //start me RAT (0,0) pr hoga, that why visited true mark karo
        visited[0][0] = true;
        int destx = n-1;
        int desty = n-1;
        string output = "";
        //important case
        if(m[0][0] == 0) {
            return ans;
        }
        //function call
        solve(m,visited,n,ans,curr_x,curr_y,destx,desty,output);
        return ans;
    }
};
