#include <bits/stdc++.h>
using namespace std;
int n,q,x,y,z;
vector<int>v;
void print()
{
    for(int i=0;i<=n;++i) cout << v[i] << ' ';
    cout << '\n' << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i=0;i<=n;++i) v.push_back(i);
    for(int i=0;i<q;++i)
    {
        cin >> x >> y;
        if(x==1)
        {
            cin >> z;
            v[y]=z;
            print();
        }else if(x==2)
        {
            cout << v[y] << '\n';
            print();
            
        }else
        {
            for(int j=0;j<y%n;++j)
            {
                v.push_back(v[1]);
                v.erase(v.begin()+1);
            }
            print();
        }
    }
    return 0;
}
