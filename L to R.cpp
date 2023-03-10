#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            s.insert(i + 1);
    }
    int q;
    cin >> q;
    for (int i = 0;i < q;i++)
    {
        int l, r;
        cin >> l >> r;
        auto it = s.lower_bound(l);
        if (it != s.end() && *it <= r)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    return 0;
}