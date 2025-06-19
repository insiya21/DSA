#include<iostream>
using namespace std;
int main(){
    //floyd's triangle
    int n;
    cout<<"enter n:";
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    cout<<endl;

    //pascal's triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int k=1;
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k=k*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
