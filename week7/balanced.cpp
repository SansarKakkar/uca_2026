#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string expression) {
    stack<char> st;

    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty())
                return false;

            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '[')) {
                return false;
            }

            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string expression;
    cin >> expression;

    cout << (isBalanced(expression) ? "true" : "false")<<endl;

    return 0;
}
