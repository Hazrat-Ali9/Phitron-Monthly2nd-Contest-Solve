/**
* author: mj_riffu
* created: 2023-03-04 15:34:53
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << '\n';
    else
    {
        long long a = round(pow(2, n - 2)), b = round(pow(2, n - 1));
        cout << a * b << '\n';
    }
    return 0;
}