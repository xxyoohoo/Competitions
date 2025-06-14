#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x,ans=0;
    cin >> k >> n;
    vector<int>v;
    vector<int>b(k,0);
    int a[k]={0};
    for(int i=0;i<n;++i) {cin >> x; v.push_back(x);}
    for(int i=0;i<n;++i)
    {
        if(v[i]==0)
        {
            int mi=0;
            for(int j=0;j<k;++j) if(a[j]<a[mi]) mi=j;
            a[mi]++;
            cout << (mi+1) << ' ';
        }
        else if(v[i]>=1)
        {
            a[v[i]-1]++;
            cout << v[i] << ' ';
        }
    }
    cout << '\n';
    return 0;
}
