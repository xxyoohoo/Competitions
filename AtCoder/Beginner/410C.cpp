#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,x,y,z;
    vector<int>v;
    cin >> n >> q;
    for(int i=0;i<=n;++i) v.push_back(i);
    for(int i=0;i<q;++i)
    {
        cin >> x >> y;
        if(x==1)
        {
            cin >> z;
            v[y]=z;
        }
        else if(x==2) cout << v[y] << '\n';
        else rotate(v.begin()+1,v.begin()+1+(y%n),v.end());
    }
    return 0;
}
