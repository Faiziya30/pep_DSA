#include <bits/stdc++.h>
using namespace std;

int prefixEval(string s)
{
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
            st.push(s[i] - '0');
        else
        {
            int opr1 = st.top();
            st.pop();
            int opr2 = st.top();
            st.pop();

            if (s[i] == '+')
                st.push(opr1 + opr2);
            else if (s[i] == '-')
                st.push(opr1 - opr2);
            else if (s[i] == '*')
                st.push(opr1 * opr2);
            else
                st.push(opr1 / opr2);
        }
    }
    return st.top();
}

int main()
{
}