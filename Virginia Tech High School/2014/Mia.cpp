//https://open.kattis.com/submissions/13715648
#include<iostream>
using namespace std;
int check(int a, int b, int c, int d)
{
    int p1,p2;
    p1=max(a,b)*10+min(a,b);
    p2=max(c,d)*10+min(c,d);
    if(p1==21 && p2!=21) cout << "Player 1 wins." << endl;
    else if(p2==21 && p1!=21) cout << "Player 2 wins." << endl;
    else if(a==b &&(p1>p2 || c!=d)) cout << "Player 1 wins." << endl;
    else if(c==d &&(p2>p1 || a!=b)) cout << "Player 2 wins." << endl;
    else if(p1>p2) cout << "Player 1 wins." << endl;
    else if(p2>p1) cout << "Player 2 wins." << endl;
    else if(p1==p2) cout << "Tie." << endl;
    return 0;
}
int main()
{
    int a,b,c,d,x=0;
    while(cin >> a >> b >> c >> d)
    {
        if(a==0 && b==0 && c==0 && d==0) break;
        else check(a,b,c,d);
    }
