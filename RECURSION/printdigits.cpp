#include <iostream>
using namespace std;
void printDigits(int n) {
    if( n == 0) {
        return ;
    }
    int newNumber = n / 10;
    printDigits(newNumber);
    int digit  = n % 10;
    cout << digit << " ";
}
int main(){   
    int n = 21478;
    printDigits(n);
    return 0;
}