#include<iostream>
using namespace std;
//original char -> '@'
//newChar -> ' '
void replaceCharacter(char originalChar, char newChar, char arr[], int size) {
    for(int i=0; i<size; i++) {
        if(arr[i] == originalChar) {
            arr[i] = newChar;
        }
    }
} 
int main(){
    char arr[1000];
    cin>>arr;
    replaceCharacter('@', ' ', arr, 1000);
    cout << arr << endl;
}
