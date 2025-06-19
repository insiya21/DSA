#include<iostream>
using namespace std;
int getLength(char arr[], int size) {
    int count = 0;
    for(int index=0; index<size; index++) {
        if(arr[index] == '\0') {
            break;
        }
        else {
            count++;
        }
    }
    return count;
}
void convertIntoUpperCase(char arr[], int n) {
    int len = getLength(arr,n);
    for(int i=0; i<len; i++) {
        char ch = arr[i];
        if(ch >='a' && ch<='z') {
            ch  = ch -'a' + 'A';
        }    
        arr[i] = ch;
    }
}
void convertIntoLowerCase(char arr[], int n) {
    int len = getLength(arr,n);
    for(int i=0; i<len; i++) {
        
        char ch = arr[i];
        //if letter is a lowercase letter
        //then only convert it
        if(ch >='A' && ch<='Z') {
            ch  = ch -'A' + 'a';
        }    
        arr[i] = ch;
    }
}
int main(){
    char arr[1000];
    cin>>arr;
    // convertIntoLowerCase(arr,1000);
    convertIntoUpperCase(arr,1000);
    cout<<arr<<endl;
}
