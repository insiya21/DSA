#include<iostream>
using namespace std;
void ReverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    cout<<"enter the values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array:";
    PrintArray(arr,n);
    ReverseArray(arr,n);
    cout<<"reversed array:";
    PrintArray(arr,n);
    return 0; 
}