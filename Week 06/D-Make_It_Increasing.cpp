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
        
        int cnt=0;
        int f=0;
        for (int i = n-2; i>=0; i--)
        {
            //cout << a[i] << " " << a[i+1] << endl;

            if(a[i+1]<=i)
            {
                f=1;
                break;
            }
            while (a[i]>=a[i+1])
            {
                a[i] /=2;
                cnt++;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] <<" ";
        // }
        // cout << endl;

        if(f) cout << -1 << endl;
        else cout << cnt << endl;
        
    }
     
    return 0;
}
