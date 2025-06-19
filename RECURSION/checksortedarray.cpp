#include<iostream>
using namespace std;
bool checkSorted(int arr[], int n, int index) {
  if(index == n-1) {
    return true;
  }
  bool currAns = false;
  bool recursionKaAns = false;
  if(arr[index+1] > arr[index]) 
  {
    currAns = true;
  }
  recursionKaAns = checkSorted(arr,n,index+1);
  return (currAns && recursionKaAns);
  // if(currAns == true && recursionKaAns == true)
  //   return true;
  // else
  //   return false;
}
int main() {  
  int arr[] = {10,20,30,40,50};
  int size = 4;
  int index = 0;
  bool ans = checkSorted(arr,size, index);
  cout << "Array is sorted or not: " << ans << endl;
  return 0;
}