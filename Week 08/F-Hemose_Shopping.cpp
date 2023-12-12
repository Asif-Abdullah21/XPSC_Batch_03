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
        int n,x; cin >> n>>x;

        int a[n+2];
        int b[n+2];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(a+1,a+n+1);
        int f=1;

        for (int i = 1; i <= n; i++)
        {
            if(b[i]!=a[i])
            {
                if(i<=x && i+x>n)
                {
                    f=0;
                    break;
                }
            }
        }

        if(f) yy;
        else nn;
        


         
    }
     
    return 0;
}
