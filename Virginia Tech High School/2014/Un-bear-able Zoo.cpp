//https://open.kattis.com/submissions/17464602
#include <bits/stdc++.h>
using namespace std;
string tlc(string s)
{
    for (char &c:s) c=tolower(c);
    return s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,ans=1;
    while (cin >> n && n!=0)
    {
        cin.ignore();
        map<string,int> a;

        for (int i=0;i<n;++i)
        {
            string s;
            getline(cin,s);
            istringstream iss(s);
            string w,l;
            while (iss >> w) l=w;
            l=tlc(l);
            a[l]++;
        }
        cout << "List " << ans++ << ":\n";
        for (const auto &i:a) cout << i.first << " | " << i.second << '\n';
    }
    return 0;
}
