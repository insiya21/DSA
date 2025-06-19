#include<iostream>
using namespace std;
//solid half diamond
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//                  cout<<"*";
//         }
//         cout<<endl;
//     }
//     n--;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
//}

//another method
for(int i=0;i<2*n-1;i++){
    int cond=0;
    if(i<n){
        cond=i;;
    }else{
        cond=n-(i%n)-2;
    }
    for(int j=0;j<=cond;j++){
            cout<<"*";
    }
    cout<<endl;
    }
}

