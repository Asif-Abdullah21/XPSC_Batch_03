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
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
           cin >> a[i];
        }

        sort(a,a+n);

        int cnt=1,f=0;;

        for (int i = 0; i < n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                 cnt++;
                 if(cnt>=3) f=a[i];
            }
            else{
                if(cnt>=3) f=a[i];
                cnt=1;
            }
        }

        if(f) cout << f << endl;
        else cout << -1 << endl;
        
        
    }
     
    return 0;
}
