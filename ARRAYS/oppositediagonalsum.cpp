#include<iostream>
using namespace std;
void printoppdiagonalsum(int arr[][3],int rowsize,int colsize){
    int sum=0;
    for(int i=0;i<rowsize;i++){
            sum=sum+arr[i][2-i];
    }
    cout<<"sum of opposite diagonal is:"<<sum<<endl;
}
int main(){
    int arr[3][3]={{1,2,4},{5,6,7},{9,10,11}};
    int rowsize=3;
    int colsize=4;
    printoppdiagonalsum(arr,rowsize,colsize);
}