#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int len;
    cin >> s >> len;
    if(s.length()<len) cout << "No";
    else cout << "Yes";
    return 0;
}
