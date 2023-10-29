#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        string s1,s2; cin >> s1 >> s2;
        char a=s1.back();
        char b=s2.back();

        if(a==b)
        {
            if(a=='S' && b=='S')
            {
                if(s1.size()>s2.size()) cout << "<" << endl;
                else if(s1.size()<s2.size()) cout << ">" << endl;
                else cout << "=" << endl;
            }
            else if(a=='M' && b=='M')
            {
                cout << "=" << endl;
            }
            else if(a=='L' && b=='L')
            {
                if(s1.size()>s2.size()) cout << ">" << endl;
                else if(s1.size()<s2.size()) cout << "<" << endl;
                else cout << "=" << endl;
            }
        }
        else if(a=='S' && b=='L')
        {
            cout << "<" << endl;
        }
        else if(a=='L' && b=='S')
        {
            cout << ">" << endl;
        }
        else if(a=='S' && b=='M')
        {
            cout << "<" << endl;
        }
        else if(a=='M' && b=='S')
        {
            cout << ">" << endl;
        }
        else if(a=='L' && b=='M')
        {
            cout << ">" << endl;
        }
        else if(a=='M' && b=='L')
        {
            cout << "<" << endl;
        }
        
    }
     
    return 0;
}