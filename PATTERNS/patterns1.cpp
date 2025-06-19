#include<iostream>
using namespace std;
int main() {
    // //square 
    // int side;
    // cout << "Enter length of side of square" << endl;
    // cin >> side;

    // for(int r=0; r < side; r++) {
    //     for(int c=0; c < side; c++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // //Rectangle
    // int length;
    // int width;
    // cout << "Enter length of rectangle" << endl;
    // cin >> length;
    // cout << "Enter width of rectangle" << endl;
    // cin >> width;
    // for(int row=0; row < length; row++) {
    //     for(int col=0; col < width; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //hollow square
    int n;
    cout << "Enter length of side of square" << endl;
    cin >>n;
    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            if(row == 0 || row == n-1 || col == 0 || col == n-1 ) 
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    //hollow rectangle
    int length;
    int width;
    cout << "Enter length" << endl;
    cin >> length;
    cout << "Enter width " << endl;
    cin >> width;
    for(int row = 0; row < length; row = row + 1 ) {
        for(int col = 0; col < width; col = col + 1) {
            if(row == 0 || row == length-1) {
                cout << "* ";
            }
            else {
                if(col == 0 || col == width-1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}


