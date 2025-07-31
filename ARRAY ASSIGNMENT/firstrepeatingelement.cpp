#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int firstrepeated(int a[],int n){
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n;
    int a[]={1,5,3,4,3,5,6};
    n=sizeof(a)/sizeof(int);
    cout<<"first repeating element is at:";
    cout<<firstrepeated(a,n);
    return 0;
}