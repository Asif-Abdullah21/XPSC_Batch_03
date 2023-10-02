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
    int n; cin >> n;

    int mn = INT_MAX;

    ll sum =0;


    int a[n];
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2!=0)
        {
             cnt++;
             mn = min(mn,a[i]);
        }
    }

    if(cnt%2!=0) sum -= mn;

    cout << sum << endl;
    
     
    return 0;
}
