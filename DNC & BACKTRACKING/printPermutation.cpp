#include <iostream>
using namespace std;
void printPermutation(string &str, int i) {
  //base case
  if( i >= str.length()) {
    cout << str << endl;
    return;
  }
  //1 case main solve karunga , baaki recursion sambhal lega
  for(int j=i; j<str.length(); j++) {
    swap(str[i], str[j]);
    printPermutation(str,i+1);
    //backtrack
    swap(str[i], str[j]);
  }
}
int main() {
  string str = "abc";
  int i = 0;
  printPermutation(str,i);
  return 0;
}