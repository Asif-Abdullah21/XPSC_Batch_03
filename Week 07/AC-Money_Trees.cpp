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
        ll n,k; cin >> n >> k;

        ll a[n];
        ll b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        

        ll i=0,j=1;

        ll cnt=0;
        ll sum=a[0];

        if(sum<=k) cnt++;

        while(j<n)
        {
            if(b[j-1]%b[j]==0)
            {
                sum += a[j];
            }
            else
            {
                sum = a[j];
                i=j;
            }

            while(sum>k)
            {
                sum -= a[i];
                i++;
            }

            cnt = max(cnt,j-i+1);
            j++;
        }

        cout << cnt << endl;


    }
     
    return 0;
}
