#include <iostream>
#include<vector>
using namespace std;
void merge(int arr[], int s, int e, int mid) {
    int leftLength = mid-s+1;
    int rightLength = e - mid;
    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];
    int index = s;
    for(int i=0; i<leftLength; i++) {
        leftArr[i] = arr[index];
        index++;
    }
    index = mid+1;
    for(int i=0; i<rightLength; i++) {
        rightArr[i] = arr[index];
        index++;
    }
    //merge logic
    int i = 0;
    int j = 0;
    int mainArrayIndex = s;
    while(i < leftLength && j < rightLength) {
        if(leftArr[i] < rightArr[j]) {
            arr[mainArrayIndex] = leftArr[i];
            i++;
            mainArrayIndex++;
        }
        else {
            arr[mainArrayIndex] = rightArr[j];
            j++;
            mainArrayIndex++;
        }
    }
    while(i < leftLength) {
        arr[mainArrayIndex] = leftArr[i];
        i++;
        mainArrayIndex++;
    }
    while(j < rightLength) {
        arr[mainArrayIndex] = rightArr[j];
        j++;
        mainArrayIndex++;
    }
    delete[] leftArr;
    delete[] rightArr;
}
void mergeSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    int mid = (s+e)/2;
    //left part
    mergeSort(arr,s,mid);
    //right part 
    mergeSort(arr,mid+1, e);
    //merge
    merge(arr,s,e,mid);
}
int main() {
    int arr[] = {10,80,110,90,50,30,40,20};
    int size = 8;
    int s = 0;
    int e = size - 1;
    cout << "Before: " << endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr,s,e);
    //printing entire array
    cout << "After: " << endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}