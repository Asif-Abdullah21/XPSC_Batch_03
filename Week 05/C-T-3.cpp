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
        int n, cow;
        cin >> n >> cow;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int l = a[0], r = a[n - 1];

        int ans = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            int cnt = 1;
            bool flag = false;

          //  cout << l << " " << mid << " " << r << endl;

            int mn = a[0];

            for (int i = 0; i < n; i++)
            {
                if(a[i]-mn>=mid)
                {
                    cnt++;
                    mn = a[i];
                }
            }

            if(cnt>=cow) flag = true;

            if (flag)
            {
                ans = max(ans, mid);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        cout << ans << endl;
    }

    return 0;
}
