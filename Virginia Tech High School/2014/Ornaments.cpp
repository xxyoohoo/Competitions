//https://open.kattis.com/submissions/17454389
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double r,h,s,theta,arc;
    while(cin >> r >> h >> s,r!=0)
    {
        theta=(M_PI/2)-acos(r/h);
        arc=r*(M_PI+(2*theta));
        cout << fixed << setprecision(2) << ((100.0+s)/100.0)*((2*sqrt((h*h)-(r*r)))+arc) << endl;
    }
    return 0;
}
