#include<bits/stdc++.h>
using namespace std;
//left to riht
// void lastoccLTR(string &s, char x,int i,int &ans){
//     if(i>=s.size()){
//         return;
//     }
//     if(s[i]==x){
//         ans=i;
//     }
//     lastoccLTR(s,x,i+1,ans);
// }
// int main(){
//     string s;
//     cout<<"enter string:";
//     cin>>s;
//     char x;
//     cout<<"enter character:";
//     cin>>x;
//     int ans=-1;
//     lastoccLTR(s,x,0,ans);
//     cout<<ans<<endl;
// }

//right to left
void lastoccRTL(string &s, char x,int i,int &ans){
    if(i<0){
        return;
    }
    if(s[i]==x){
        ans=i;
        return;
    }
    lastoccRTL(s,x,i-1,ans);
}
int main(){
    string s;
    cout<<"enter string:";
    cin>>s;
    char x;
    cout<<"enter character:";
    cin>>x;
    int ans=-1;
    lastoccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;
}