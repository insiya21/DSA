#include<iostream>
using namespace std;
int findMax(int arr[],int size){
    int maxAns=INT32_MIN;
    for(int i=0;i<size;i++){
        maxAns=max(maxAns,arr[i]);
        // if(arr[i]>maxAns){
        //     maxAns=arr[i];
        // }
    }
    return maxAns;
}
int main(){
    int arr[100];
    int size;
    cout<<"enter no. of elements in array:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter input value for index: "<<i<<endl;
        cin>>arr[i];
    }
    int max=findMax(arr,size);
    cout<<"Max no. is: "<<max<<endl;
    return 0;
}