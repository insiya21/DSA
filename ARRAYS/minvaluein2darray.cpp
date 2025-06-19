#include<iostream>
using namespace std;
int findminin2darray(int arr[][4],int rowsize,int colsize){
    int minvalue=INT16_MAX;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            minvalue=min(arr[i][j],minvalue);
        }
    }
    return minvalue;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rowsize=3;
    int colsize=4;
    int ans=findminin2darray(arr,rowsize,colsize);
    cout<<"minimum value:"<<ans<<endl;
}