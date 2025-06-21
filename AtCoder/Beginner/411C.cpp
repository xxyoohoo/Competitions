#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, ans=0;
    cin >> n >> q;
    vector<bool> b(n,0);
    for (int i=0;i<q;++i)
    {
        int a;
        cin >> a;
        if (!b[a]) // w->b
        {
            b[a]=1;
            bool ll=b[a-1];
            bool rr=b[a+1];
            if (!ll && !rr) ans++; // new 
            else if (ll && rr) ans--; // merged
        }
        else // b->w
        {
            b[a]=false;
            bool ll=b[a-1];
            bool rr=b[a+1];
            if (!ll && !rr) ans--; // removed
            else if (ll && rr) ans++;    // split into 2
        }
        cout << ans << '\n';
    }
    return 0;
}
