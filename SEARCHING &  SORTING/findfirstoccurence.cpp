#include<iostream>
using namespace std;
void findfirstoccurence(int arr[],int n,int target,int &ansindex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansindex=mid;
            e=mid-1;
        }
        if(target>arr[mid]){
            s=mid+1;
        }
        if(target<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    int arr[]={10,20,20,30,30,50,60,70,80};
    int n=9;
    int target=30;
    int ansindex=-1;
    findfirstoccurence(arr,n,target,ansindex);
    cout<<"first occurence index:"<<ansindex<<endl;
    return 0;
}