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
        int q; cin >> q;
        ll a[n];

        ll sum =0,e=0,o=0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];

            if(a[i]&1) o++;
            else e++;
        }


        while (q--)
        {
            int type;
            ll val; 
            cin>> type >> val;

            if(type==0)
            {
                ll temp = val*e;
                sum += temp;
                if(val%2!=0)
                {
                    e=0;
                    o=n;
                }
            }
            else
            {
                ll temp = val*o;
                sum += temp; 
                if(val%2!=0)
                {
                    e=n;
                    o=0;
                }
            }

            cout << sum << endl;
        }


        
    }
     
    return 0;
}
