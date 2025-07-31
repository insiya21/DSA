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
    int arr[]={10,20,30,30,30,30,60,70,80};
    int n=9;
    int target=30;
    int firstindex=-1;
    int lastindex=-1;
    findfirstoccurence(arr,n,target,firstindex);
    findlastoccurence(arr,n,target,lastindex);
    int totaloccurences=lastindex-firstindex+1;
    cout<<"first occurence index:"<<firstindex<<endl;
    cout<<"last occurence index:"<<lastindex<<endl;
    cout<<"total occurence:"<<totaloccurences<<endl;
    return 0;
}