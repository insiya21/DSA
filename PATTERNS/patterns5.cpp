#include<iostream>
using namespace std;
void mixPyramids(int n) {
  // PART - 1
  for (int i = 0; i < n; i++) {
    // I. stars
    for (int j = 0; j < n - i; j++)
      cout << "*";

    // II. spaces
    for (int j = 0; j < 2 * i + 1; j++)
      cout << " ";

    // III. stars
    for (int j = 0; j < n - i; j++)
      cout << "*";
    cout << endl;
  }

  // PART - 2
  for (int i = 0; i < n; i++) {
    // I. stars
    for (int j = 0; j < i + 1; j++)
      cout << "*";

    // II. spaces
    for (int j = 0; j < 2 * (n - i) - 1; j++)
      cout << " ";

    // III. stars
    for (int j = 0; j < i + 1; j++)
      cout << "*";
    cout << endl;
  }
}

void fancy12(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * i + 1; j++) {
      // cout << "$";

      if (j % 2 == 0)
        cout << i + 1;
      else
        cout << "*";
    }
    cout << endl;
  }
}

void fullfancy12(int n) {
  fancy12(n);

  n--;
  // inverted ka logic
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * (n - i) - 1; j++) {
      // cout << "$";
      if (j % 2 == 0)
        cout << n - i;
      else
        cout << "*";
    }
    cout << endl;
  }
}

void ABCBA(int n) {
  for (int i = 0; i < n; i++) {
    char ch = 'A'; // ASCII 65 init.
    for (int j = 0; j < i + 1; j++) {
      cout << ch;
      ch++;
    }
    
    ch--;
    
    while (ch > 'A') {
      ch--;
      cout << ch;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout<<"enter n:";
  cin >> n;
  // mixPyramids(n);
  // fancy12(n);
  // fullfancy12(n);
  ABCBA(n);
  return 0;
}