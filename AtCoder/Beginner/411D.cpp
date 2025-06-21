#include <bits/stdc++.h>
using namespace std;
// 1 p: Replace PC string with server string
// 2 p s: Append s to  end of PC p.
// 3 p: Replace server string with PC p.
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int pcn, n, x, act;
    string server, s;
    cin >> pcn >> n;
    vector<string> pc(pcn+1);
    for(int i=0;i<n;++i)
    {
        cin >> act >> x;
        if(act==1)
        {
            pc[x]=server;
        }
        else if(act==2)
        {
            cin >> s;
            pc[x]+=s;
        }
        else
        {
            server=pc[x];
        }
    }
    cout << server;
    return 0;
}
