#include <iostream>
#include <stack>
using namespace std;
int countRedundantBrackets(string expression) {
    stack<char> st;
    int count = 0;
    for (char ch : expression) {
        if (ch == ')') {
            bool hasOperator = false;
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();  // pop the opening bracket
            }
            // If no operator found between brackets, it's redundant
            if (!hasOperator) {
                count++;
            }
        } 
        else {
            st.push(ch);  // push everything else including '('
        }
    }
    return count;
}
int main() {
    string expr = "((a+b)) + (c + (d))";
    cout << "Number of redundant brackets: " << countRedundantBrackets(expr) << endl;
    return 0;
}
