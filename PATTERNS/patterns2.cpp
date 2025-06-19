#include<iostream>
using namespace std;
int main() {

    //half pyramid
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<row+1; col++) {
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }

    //inverted half pyramid 
//     for(int row=0; row<n; row++) {
//         for(int col=0; col<n-row; col++) {
//                 cout << "* ";
//         }
//         cout << endl;
//     }
// }

//     //hollow half pyramid 
//     for(int row=0; row<n; row++) {
//         int totalcolumns=row+1;
//         for(int col=0; col<totalcolumns; col++) {
//             if(row == 0 || row == 1 || row == n-1) {
//                 cout << "* ";
//             }
//             else{
//                 if(col == 0 || col == totalcolumns-1){
//                     cout<<"* ";
//                 }
//                 else{
//                 cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

    //inverted hollow half pyramid 
    for(int row=0; row<n; row++) {
        for(int col=0; col<n-row; col++) {
            if(row == 0 || row == n-1 || col == 0 || (row+col == n-1) ) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
