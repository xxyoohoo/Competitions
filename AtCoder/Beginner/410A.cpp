#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x,ans=0;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;++i) {cin >> x; v.push_back(x);}
    cin >> k;
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i)
    {
        if(v[i]>=k)++ans;
    }
    cout << ans << '\n';
    return 0;
}
