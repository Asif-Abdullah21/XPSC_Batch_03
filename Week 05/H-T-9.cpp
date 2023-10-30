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

bool isvalid(ll n)
{

}

int main()
{
    FIO;
    ll n,m; cin >> n>> m;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n,greater<ll>());

    ll l=0,r=1e18;

    ll ans;

    while (l<=r)
    {
        ll mid = l+(r-l)/2;
        bool flag = false;

    //    cout << l << " " <<mid << " " << r << endl;

        ll sum =0;
        
        for (int i = 0; i < n; i++)
        {
            sum += max(a[i]-mid,0LL);

            if(sum>=m)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;

    }

    cout << ans << endl;
    
    
     
    return 0;
}
