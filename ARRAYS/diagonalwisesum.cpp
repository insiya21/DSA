#include<iostream>
using namespace std;
// void printdiagonalsum(int arr[][3],int rowsize,int colsize){
//     int sum=0;
//     for(int i=0;i<rowsize;i++){
//         for(int j=0;j<colsize;j++){
//             if(i==j){
//             sum=sum+arr[i][j];
//             }
//         }
//     }
//     cout<<"sum of diagonal is:"<<sum<<endl;
// }
void printdiagonalsum(int arr[][3],int rowsize,int colsize){
    int sum=0;
    for(int i=0;i<rowsize;i++){
        sum=sum+arr[i][i];
    }
    cout<<"sum of diagonal is:"<<sum<<endl;
}
int main(){
    int arr[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    int rowsize=3;
    int colsize=4;
    printdiagonalsum(arr,rowsize,colsize);
}