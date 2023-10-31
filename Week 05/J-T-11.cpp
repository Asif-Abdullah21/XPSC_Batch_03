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

bool isValid(ll h,ll w,ll n,ll a[])
{
    ll sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += max(h-a[i],0LL);
    }

    if(sum<=w) return true;
    else return false;
    
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        ll n,w;
        cin >> n >> w;
        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l=0,r=1e12;
        ll ans;

        while (l<=r)
        {
            ll height = l+(r-l)/2;

            if(isValid(height,w,n,a))
            {
                ans = height;
                l = height+1;
            }
            else r = height-1;
        }

        cout << ans << endl;
        
         
    }
     
    return 0;
}
