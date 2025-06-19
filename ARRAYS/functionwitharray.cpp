#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void solve1(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]*10<<" ";
    }
}
void solve2(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]+10<<" ";
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    // print(arr,size);
    // solve1(arr,size);
    solve2(arr,size);
}