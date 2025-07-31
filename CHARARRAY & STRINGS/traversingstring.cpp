#include<iostream>
using namespace std;
int main(){
    string name="Maharana Pratap";
    auto it = name.begin();
    while(it != name.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}