#include<iostream>
using namespace std;
//numeric hollow inverted half pyramid
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(j==n||j==i+1||i==0){
                cout<<j<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

