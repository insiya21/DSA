#include<iostream>
using namespace std;
void findlastoccurence(int arr[],int n,int target,int &ansindex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            ansindex=mid;
            s=mid+1;
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
    int arr[]={10,20,30,30,30,50,60,70,80};
    int n=9;
    int target=30;
    int ansindex=-1;
    findlastoccurence(arr,n,target,ansindex);
    cout<<"last occurence index:"<<ansindex<<endl;
    return 0;
}