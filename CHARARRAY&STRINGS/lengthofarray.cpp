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
    // int index = 0;
    // while(arr[index] != '\0') {
    //     count++;
    //     index++;
    // }
    return count;
}
int main(){
    char arr[1000];
    cin>>arr;
    cout<<getLength(arr,1000);
}
