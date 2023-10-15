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
        string str;

        int n; cin >> n;
        string s; cin >> s;

        s[0] = tolower(s[0]);
        str = s[0];

        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
            if(s[i]!=s[i-1]) str += s[i];
        }

        // cout << str << endl;

        if( str == "meow") yy;
        else nn;
         
    }
     
    return 0;
}
