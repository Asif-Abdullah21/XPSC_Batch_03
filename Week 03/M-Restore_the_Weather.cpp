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
        int n,k; cin >> n >> k;

        int a[n];
        int b[n];

        vector<pair<int,int>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back({a[i],i});
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(v.begin(),v.end());
        sort(b,b+n);

        int c[n+1];

        for (int i = 0; i < n; i++)
        {
            c[v[i].second] = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }

        cout << endl;

        
    }
     
    return 0;
}
