#include<iostream>
using namespace std;
void minInArray(int arr[], int size,int index, int &mini) {
    if(index == size) {
        return;       
    }
    mini = min(mini, arr[index]);
    minInArray(arr,size,index+1, mini);
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int index=0;
    int mini=INT16_MAX;
    minInArray(arr,size,index,mini);
    cout<<"min no. is:"<<mini<<endl;
    return 0;
}
