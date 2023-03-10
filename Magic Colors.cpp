/**
* author: mj_riffu
* created: 2023-03-04 15:34:53
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (st.size() == 0)
                st.push(s[i]);
            else
            {
                char ch = st.top();
                if (st.size() >= 1)
                {
                    if ((ch == 'R' && s[i] == 'B') || (ch == 'B' && s[i] == 'R'))
                    {
                        st.pop();
                        if (st.size() >= 1 && st.top() == 'P')
                            st.pop();

                        else
                            st.push('P');
                    }
                    else if ((ch == 'R' && s[i] == 'G') || ((ch == 'G' && s[i] == 'R')))
                    {
                        st.pop();
                        if (st.size() >= 1 && st.top() == 'Y')
                            st.pop();
                        else
                            st.push('Y');
                    }
                    else if ((ch == 'B' && s[i] == 'G') || ((ch == 'G' && s[i] == 'B')))
                    {
                        st.pop();
                        if (st.size() >= 1 && st.top() == 'C')
                            st.pop();
                        else
                            st.push('C');
                    }
                    else
                    {
                        if (st.top() == s[i])
                            st.pop();
                        else
                            st.push(s[i]);
                    }
                }
                else
                    st.push(s[i]);
            }
        }
        string ss;
        while (!st.empty())
        {
            ss.push_back(st.top());
            st.pop();
        }
        reverse(ss.begin(), ss.end());
        cout << ss << '\n';
    }
    return 0;
}