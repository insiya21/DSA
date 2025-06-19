#include<iostream>
using namespace std;
int pow(int n) {
    //base case
    if( n == 0) {
        return 1;
    }
    //recursive relation 
    //pow(n) = 2 * pow(n-1);
    int recKaAns = pow(n-1);
    int finalAns = 2 * recKaAns;
    return finalAns;
    //processing 
}
int main() {
    int n;
    cout << "Enter the value of n: " ;
    cin >> n;
    int ans = pow(n);
    cout << "2 to the power " << n << " is: " << ans << endl;
    return 0;
}
