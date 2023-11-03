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
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = INT_MAX; // array er max value ta nileu hoito

        bool flag = false;


        while (l<=r)
        {
            int mid = l+(r-l)/2;

            double ans=1.0;

            for (int i = 0; i < n; i++)
            {
                ans = ans * (a[i]*1.0/mid);
            }

            if(fabs(ans-1.0)<1e-15)
            {
                flag = true;
                break;
            }
            else if(ans>1.0)
            {
                l = mid+1;
            }
            else r = mid-1;


        }

        if(flag) yy;
        else nn;
        
    }

    return 0;
}
