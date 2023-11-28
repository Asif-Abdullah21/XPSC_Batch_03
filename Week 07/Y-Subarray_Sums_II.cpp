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
map<ll, int> mp;


int main()
{
    FIO;

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    

    ll sum = 0;
    mp[0]=1;

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];

    //    cout << sum-k << " " << sum << endl;

        cnt += mp[sum-k];
        mp[sum]++;
    }

    cout << cnt << endl;

    return 0;
}
