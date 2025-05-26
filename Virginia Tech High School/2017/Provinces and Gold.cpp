//https://open.kattis.com/submissions/13686842
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int g,s,c,x;
    cin >> g >> s >> c;
    g*=3;
    s*=2;
    x=s+g+c;//6+2+0
    if(x>1)
    {
        if(x>7) cout << "Province";
        else if (x>4) cout << "Duchy";
        else cout << "Estate";
        cout << " or ";
    }
    if(x>5) cout << "Gold";
    else if(x>2) cout << "Silver";
    else cout << "Copper";
    return 0;
}
