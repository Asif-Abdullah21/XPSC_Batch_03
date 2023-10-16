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
        int odd=0;
        int even=0;
        int mnOdd = INT_MAX;
        int mnEven = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2!=0)
            {
                 odd++;
                 mnOdd = min(mnOdd,a[i]);
            }
            else{
                even++;
                mnEven = min(mnEven,a[i]);
            }
        }

        if(odd==n || even==n) yy;
        else{
            if(mnOdd<mnEven) yy;
            else nn;

        }


         
    }
     
    return 0;
}
