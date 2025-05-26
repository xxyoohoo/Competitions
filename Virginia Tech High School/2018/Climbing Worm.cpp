//https://open.kattis.com/submissions/17460974
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z,a=0,b=0;
    cin >> x >> y >> z;
    while(true)
    {
        ++b;
        a+=x;
        if(a>=z) break;
        a-=y;
    }
    cout << b;
}
