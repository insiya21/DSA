#include<iostream>
using namespace std;
int findMin(int arr[],int size){
    int minAns=INT32_MAX;
    for(int i=0;i<size;i++){
        // minAns=min(minAns,arr[i]);
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
    return minAns;
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
    int min=findMin(arr,size);
    cout<<"Min no. is: "<<min<<endl;
    return 0;
}