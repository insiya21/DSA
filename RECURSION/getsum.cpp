#include<iostream>
using namespace std;
int getSum(int n) {
    //base case
    if(n == 1) 
        return 1;
    //recursive relation
    //sum(n) = sum(n-1) + n;
    int ans = getSum(n-1) + n;
    return ans;
    //processing
}
int main() {
    int n;
    cout << "Enter the value of n: " ;
    cin >> n;
    cout <<"sum of numbers upto "<<n<<" is:" <<getSum(n)<< endl;
    return 0;
}
