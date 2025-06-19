#include<iostream>
using namespace std;
//mirror image of numeric half pyramid
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }else{
                cout<<c;
                c++;
            }
        }
        cout<<endl;
    }
}

//numeric full pyramid
//     int k=n;
//     for(int i=0;i<n;i++){
//         int c=1;
//         for(int j=0;j<k;j++){
//             if(j<n-i-1){
//                 cout<<" ";
//             }else{
//                 cout<<c;
//                 c++;
//             }
//         }
//         k++;
//         cout<<endl;
//     }
// }


