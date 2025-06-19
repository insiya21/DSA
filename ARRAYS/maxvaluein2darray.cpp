#include<iostream>
using namespace std;
int findmaxin2darray(int arr[][4],int rowsize,int colsize){
    int maxvalue=INT16_MIN;
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            maxvalue=max(arr[i][j],maxvalue);
        }
    }
    return maxvalue;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rowsize=3;
    int colsize=4;
    int ans=findmaxin2darray(arr,rowsize,colsize);
    cout<<"maximum value:"<<ans<<endl;
}