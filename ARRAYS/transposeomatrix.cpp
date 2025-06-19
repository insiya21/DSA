#include<iostream>
using namespace std;
void transposematrix(int arr[][3],int rowsize,int colsize){
    int ans[100][100]={0};
    cout<<"given matrix:"<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            ans[i][j]=arr[j][i];
        }
    }
    cout<<"transpose of matrix is:"<<endl;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={{1,2,4},{5,6,7},{9,10,11}};
    int rowsize=3;
    int colsize=3;
    transposematrix(arr,rowsize,colsize);
}