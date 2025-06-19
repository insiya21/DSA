#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    int i=0;
    for(;i<zerocount;i++){
        arr[i]=0;
    }
    for(;i<size;i++){
        arr[i]=1;
    }
    // fill(arr,arr+zerocount,0);
    // fill(arr+zerocount,arr+size,1);
}
int main(){
    int arr[]={0,1,1,0,0,1,1};
    int size=7;
    cout<<"given array:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array:";
    sortZeroOne(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0; 
}