#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    //Creation
    unordered_map <int,string> uMap;
    map <int,string> oMap;

    //Insertion
    uMap[2]="Scorpio";
    uMap[3]="Fortuner";
    uMap[1]="Baleno";

    oMap[2]="Scorpio";
    oMap[3]="Fortuner";
    oMap[1]="Baleno";

    //Sorted order
    cout<<"Printing Ordered Map:"<<endl;
    for(auto i : oMap){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    //Random order
    cout<<"Printing Unordered Map:"<<endl;
    for(auto i : uMap){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    //Search or Find
    //count() method
    // if(uMap.find(1)==uMap.end()){
    //     cout<<"1 not found"<<endl;
    // }
    // else{
    //     cout<<"1 found"<<endl;
    // }

    //find() method
    if(uMap.count(3)==0){
        cout<<"3 not found"<<endl;
    }
    else{
        cout<<"3 found"<<endl;
    }
}