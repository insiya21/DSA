// ITERATIVE SOLUTION
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int min_price=INT_MAX;
//         int max_profit=0;
//         for(int price:prices){
//             if(price<min_price){
//                 min_price=price;
//             }
//             else if(price-min_price>max_profit){
//                 max_profit=price-min_price;
//             }
//         }
//         return max_profit;
//     }
// };

//RECURSIVE SOLUTION
class Solution {
public:
    void maxprofitfinder(vector<int>&prices,int i,int &minprice,int &maxprofit){
        if(i==prices.size()) return;
        if(prices[i]<minprice) minprice=prices[i];
        int todaysprofit=prices[i]-minprice;
        if(todaysprofit>maxprofit) maxprofit=todaysprofit;
        maxprofitfinder(prices,i+1,minprice,maxprofit);
    }
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprofit=INT_MIN;
        maxprofitfinder(prices,0,minprice,maxprofit);
        return maxprofit;
    }
};