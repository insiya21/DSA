#include<iostream>
using namespace std;
int main(){
char arr[100];
    cout << "Enter your name" << endl;
    // cin >> arr;
    cin.getline(arr,100);
    cout << "Your name is: " << arr << endl;
    cout << arr[0] << "-> " << (int)arr[0] << endl;
    cout << arr[1] << "-> " << (int)arr[1] << endl;
    cout << arr[2] << "-> " << (int)arr[2] << endl;
    cout << arr[3] << "-> " << (int)arr[3] << endl;
    cout << arr[4] << "-> " << (int)arr[4] << endl;
    return 0;
}
