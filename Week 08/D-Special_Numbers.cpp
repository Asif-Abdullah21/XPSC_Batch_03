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

const ll N = 1e9+7;

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        ll n,k; cin >> n >> k; 

        ll sum=0;
        ll cnt=0;

        while (k)
        {
            //cout << n << " " << cnt<< endl;
            ll rem = k%2;
            ll base=n;
            ll result=1;

            if(rem)
            {
                for (int i = 0; i < cnt; i++)
                {
                    result = (result*base)%N;
                }

                sum += (result%N);  
            }

            k/=2;
            cnt++;
        }

        cout << sum%N << endl;
        
    }
     
    return 0;
}
