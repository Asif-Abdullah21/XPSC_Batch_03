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
        string s; cin >> s;
        int f=1;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!='Y' && s[i]!='e' && s[i]!='s') f=0;
        }

        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]=='Y' && s[i+1]!='e') f=0;
            if(s[i]=='e' && s[i+1]!='s') f=0;
            if(s[i]=='s' && s[i+1]!='Y') f=0;
        }

        if(f) yy;
        else nn;
         
    }
     
    return 0;
}
