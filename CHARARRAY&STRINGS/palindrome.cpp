#include<iostream>
using namespace std;
int getLength(char arr[], int size) {
    int count = 0;
    for(int index=0; index<size; index++) {
        if(arr[index] == '\0') {
            break;
        }
        else {
            count++;
        }
    }
    return count;
}
bool checkPalindrome(char arr[], int n) {
    int len = getLength(arr,n);
    int i=0;
    int j=len-1;
    while(i <= j) {
        if(arr[i] == arr[j]) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}
int main(){
    char arr[1000];
    cin >> arr;
    cout << "Palindome or not: " << checkPalindrome(arr,1000) << endl;
}

