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

    ll n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    ll lcm = lcm(a,b);

    ll total =0;

    total += (n / a)*x; 
    total += (n / b)*y; 

    total -= ((n/lcm)*(x+y));

    total += ((n/lcm)*max(x,y));
    

    cout << total << endl;

    return 0;
}


// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define no (cout << "No\n")
// #define yes (cout << "Yes\n")
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;

// int main()
// {
//     FIO;

//     ll n, a, b, x, y;
//     cin >> n >> a >> b >> x >> y;
//     ll lcm = lcm(a,b);

//     ll cnt3 = n / lcm;
//     ll cnt1 = (n / a)-cnt3;
//     ll cnt2 = (n / b)-cnt3;

//     ll total = (cnt1 * x) + (cnt2 * y) + (cnt3 * (max(x, y)));

//     cout << total << endl;

//     return 0;
// }
