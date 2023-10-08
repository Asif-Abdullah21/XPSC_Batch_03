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

    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll pre[n+2];

    pre[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1] + a[i-1];
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << pre[i] << " ";
    // }
    // cout << endl;

    int t; cin >> t;

    while (t--)
    {
        int a,b;cin >> a >> b;

        cout << pre[b+1] - pre[a] << endl;
    }
    
    
     
    return 0;
}
