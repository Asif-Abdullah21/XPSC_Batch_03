#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define no (cout << "No\n")
#define yes (cout << "Yes\n")
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
        string s1, s2;
        cin >> s1 >> s2;

          
        if(s2=="a") cout << 1 << endl;
        else
        {
            int f = 0;
            for (int i = 0; i < s2.size(); i++)
            {
                if (s2[i] == 'a')
                {
                    f = 1;
                    break;
                }
            }

            if (f)
                cout << -1 << endl;
            else
            {
                ll n = s1.size();
                ll ans = pow(2,n);

                cout << ans << endl;
                // ll ans = 1;

                // for (int i = 0; i < n; i++)
                // {
                //     ans *=2;
                // }

                // cout << ans << endl;
                
                
            }
        }
    }

    return 0;
}
