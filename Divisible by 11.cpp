#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = s.size() - 1;i >= 0;i -= 2)
    {
        a += (s[i] - '0');
    }
    for (int i = s.size() - 2;i >= 0;i -= 2)
    {
        b += (s[i] - '0');
    }
    if (abs(a - b) % 11 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
