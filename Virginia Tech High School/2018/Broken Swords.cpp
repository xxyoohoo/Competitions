//https://open.kattis.com/submissions/17460013
#include <bits/stdc++.h>
using namespace std;
long long tb=0,lr=0;
int sort(string s)
{
    if(s[0]=='0')++tb;
    if(s[1]=='0')++tb;
    if(s[2]=='0')++lr;
    if(s[3]=='0')++lr;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,sw;
    string s;
    cin >> n;
    while(n--){cin >> s; sort(s);}
    sw=min(int(tb/2),int(lr/2));
    cout << sw << ' ' << tb-(sw*2) << ' ' << lr-(sw*2);
    return 0;
}
