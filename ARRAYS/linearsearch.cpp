#include<iostream>
using namespace std;
bool findtarget(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[100];
    int size;
    cout<<"enter no. of elements in array:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter input value for index "<<i<<endl;
        cin>>arr[i];
    }
    int target;
    cout<<"enter the value of target:"<<endl;
    cin>>target;
    bool ans=findtarget(arr,size,target);
    cout<<"ans: "<<ans<<endl;
}