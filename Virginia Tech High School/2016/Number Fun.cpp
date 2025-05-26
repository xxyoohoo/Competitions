//https://open.kattis.com/submissions/17459654
#include <bits/stdc++.h>
using namespace std;
int work(int x,int y,int z)
{
    if(x+y==z || abs(x-y)==z || x*y==z || (x/y==z && x%y==0) || (y/x==z && y%x==0)) return 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,z;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> z;
        if(work(x,y,z)) cout << "Possible\n";
        else cout << "Impossible\n";
    }
    return 0;
}
