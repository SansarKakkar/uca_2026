#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stack<int> st;

    for (int i = 0; i < s.length(); i++) {

        if (s[i] == ' ')
            continue;

        if (isdigit(s[i])) {
            st.push(s[i] - '0');
        }
        else {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            if (s[i] == '+')
                st.push(a + b);
            else if (s[i] == '-')
                st.push(a - b);
            else if (s[i] == '*')
                st.push(a * b);
            else if (s[i] == '/')
                st.push(a / b);
        }
    }

    cout << st.top()<<endl;

    return 0;
}
