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
        int n; cin >> n;
        int a[n];
        map<int,int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a,a+n);
        int mx = a[n-1];

        int ans=0;

        for (int i = 0; i < n; i++)
        {
            if(mp[a[i]]!=0)
            {
                ans++;
                int val = a[i];

                while (val<=mx && mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
                
            }
        }

        cout << ans << endl;
        


         
    }
     
    return 0;
}
