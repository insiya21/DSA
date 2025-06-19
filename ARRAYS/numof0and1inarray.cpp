#include<iostream>
using namespace std;
void printzeroesandones(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        int currelement=arr[i];
        if(currelement==0){
            zerocount++;
        }
        if(currelement==1){
            onecount++;
        }
    }
    cout<<"total zeroes:"<<zerocount<<endl;
    cout<<"total ones:"<<onecount<<endl;
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
    printzeroesandones(arr,size);
    return 0;
}