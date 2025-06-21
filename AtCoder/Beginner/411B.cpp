#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n==1)
    {
        cin >> n;
        cout << n << '\n';
    }
    vector<int> v(n-1);
    for(int i=0;i<n;++i) cin >> v[i];
    vector<int> dif(n);
    dif[0]=0;
    for(int i=1;i<n;++i) dif[i]=dif[i-1]+v[i-1];
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            cout << dif[j]-dif[i];
            if(j!=n-1) cout << ' ';
        }
        if(i!=n-2) cout << '\n';
    }
    return 0;
}
