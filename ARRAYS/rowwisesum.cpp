#include<iostream>
using namespace std;
void printrowsum(int arr[][4],int rowsize,int colsize){
    for(int i=0;i<rowsize;i++){
        int sum=0;
        for(int j=0;j<colsize;j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is:"<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rowsize=3;
    int colsize=4;
    printrowsum(arr,rowsize,colsize);
}