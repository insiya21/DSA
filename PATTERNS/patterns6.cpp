#include<iostream>
using namespace std;
//numeric hollow pyramid
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i||i==n-1){
                cout<<j+1<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

