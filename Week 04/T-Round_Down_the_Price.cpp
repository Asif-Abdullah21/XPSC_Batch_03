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
        ll n; cin >> n;
        ll ans = 1;

        while (ans<=n)
        {
            ans *=10;
        }

        ans /=10;

        cout << n-ans << endl;
        

        
    }
     
    return 0;
}







// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
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
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long double n; cin >> n;

//         int i=0;
//         long double ans=0;
//         while(true)
//         {
//             if(pow(10,i)<=n){
//                 ans=pow(10,i);
//             }
//             else break;
//             i++;
//         }
        

//         cout << (ll)(n-ans) << endl;

//        // cout << (ll)(n-pow(10,cnt)) << endl;
//     }
     
//     return 0;
// }
