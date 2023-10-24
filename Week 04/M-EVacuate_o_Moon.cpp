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
        int n,m;
        ll h;

        cin >> n >> m;
        cin >> h;

        ll a[n];
        ll b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a,a+n,greater<ll>());
        sort(b,b+m,greater<ll>());

        ll sum = 0;

        for (int i = 0; i < min(n,m); i++)
        {
            if(b[i]*h>=a[i]) sum += a[i];
            else sum += (b[i]*h);
        }

        cout << sum << endl;
        
    
    }
     
    return 0;
}
