class Solution {
public:
    int solve(vector<int>& coins, int amount) {
        if(amount == 0) {
            return 0;
        }
        int minCoinAns = INT_MAX;
        for(int i=0; i<coins.size(); i++) {
            int coin = coins[i];
            if( coin <= amount) {
                int recursionAns = solve(coins, amount-coin);
                if(recursionAns != INT_MAX) {
                    int coinsUsed = 1 + recursionAns;
                    minCoinAns = min(minCoinAns, coinsUsed);
                }
            }
        }
    return minCoinAns;
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins, amount);
        if(ans == INT_MAX) {
            return -1;
        }
        else
            return ans;
    }
};