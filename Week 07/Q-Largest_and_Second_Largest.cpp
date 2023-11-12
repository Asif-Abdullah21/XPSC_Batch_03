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
        int n; cin >> n;
        int a[n];
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx,a[i]);
        }
        int secondMx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if(a[i]==mx) continue;

            secondMx = max(secondMx,a[i]);
        }

        cout << (mx + secondMx) << endl;
         
    }
     
    return 0;
}
