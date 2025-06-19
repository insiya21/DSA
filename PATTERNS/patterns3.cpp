#include<iostream>
using namespace std;
int main(){
    
    //numeric half pyramid 
//     int n;
//     cout<<"enter value of n:";
//     cin>>n;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i+1; j++) {
//                 cout <<(j+1)<< " ";
//         }
//         cout << endl;
//     }
// }

    //inverted numeric half pyramid 
    int n;
    cout<<"enter value of n:";
    cin>>n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
                cout <<(j+1)<< " ";
        }
        cout << endl;
    }
}