//https://open.kattis.com/submissions/17464552
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    while (cin >> x >> y && (x != 0 || y != 0))
    {
        if(x+y==13) cout << "Never speak again.\n";
        else if(x>y) cout << "To the convention.\n";
        else if(x<y) cout << "Left beehind.\n";
        else if(x==y) cout << "Undecided.\n";
    }
    return 0;
}
