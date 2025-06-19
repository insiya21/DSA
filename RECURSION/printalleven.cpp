#include<iostream>
#include<vector>
using namespace std;
void printAllEvens(int arr[],int n, int index,vector<int>ans) {
    if(index == n) {
        return;
    }
    if( !(arr[index]&1) ) {
        cout << arr[index] << " ";
    }
    printAllEvens(arr,n,index+1,ans);
}
int main() {
    int arr[] = {10,8,12,13,14,18,16};
    int size = 7;
    int index  = 0;
    vector<int> ans;
    printAllEvens(arr,size,index,ans);
    for(auto num: ans) {
        cout << num << " ";
    }
    return 0;
}