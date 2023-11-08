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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int first = abs(a[0]-a[1]);
        int last = abs(a[n-1]-a[n-2]);

        int ans;

        if(first<=last) ans = first;
        else ans = last;

        int mx = INT_MIN;

        for (int i = 1; i < n-1; i++)
        {
            int tm1 = abs(a[i]-a[i-1]);
            int tm2 = abs(a[i]-a[i+1]);

            mx = max(tm1,tm2);

            ans = min(mx,ans);
        }

        cout << ans << endl;
        
         
    }
     
    return 0;
}
