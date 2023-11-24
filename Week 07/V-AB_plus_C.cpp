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

ll N = 1e6;

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        ll n; cin >> n;

        if(n==1) cout << -1 << endl;
        else if(n<=N)
        {
            cout << 1 << " " << n-1 << " " << 1 << endl;
        }
        else if(n%N==0){
            cout << (n/N)-1 << " " << N << " " << N << endl;
        }
        else{
            cout << (n/N) << " " << N << " " << (n%N) << endl;
        }
    }
     
    return 0;
}
