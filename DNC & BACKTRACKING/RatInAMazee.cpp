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
        if(curr_x == destx && curr_y == desty) {
            ans.push_back(output);
            return;
        }
        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,-1,1};
        char move[] = {'U','D','L','R'};
        for(int i=0; i<4; i++) {
            int newx = curr_x + dx[i];
            int newy = curr_y + dy[i];
            char movement = move[i];
            if(isSafe(newx,newy,m,visited,n)) {
                visited[newx][newy] = true;
                output.push_back(movement);
                solve(m,visited,n,ans,newx,newy,destx,desty,output);
                //backtracking
                output.pop_back();
                visited[newx][newy] = false;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<bool> > visited(n, vector<bool>(n,0));
        int curr_x = 0;
        int curr_y = 0;
        visited[0][0] = true;
        int destx = n-1;
        int desty = n-1;
        string output = "";
        if(m[0][0] == 0) {
            return ans;
        }
        //function call
        solve(m,visited,n,ans,curr_x,curr_y,destx,desty,output);
        return ans;
    }
};
