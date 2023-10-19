// // #include <bits/stdc++.h>
// // #define endl "\n"
// // #define nn (cout << "NO\n")
// // #define yy (cout << "YES\n")
// // #define ll long long
// // #define ull unsigned long long
// // #define gcd(a, b) __gcd(a, b)
// // #define lcm(a, b) ((a / gcd(a, b)) * b)
// // #define pii pair<int, int>
// // #define pll pair<long long, long long>
// // #define mm(a, x) memset(a, x, sizeof(a))
// // #define FIO                       \
// //     ios_base::sync_with_stdio(0); \
// //     cin.tie(0);                   \
// //     cout.tie(0);
// // using namespace std;

// // int main()
// // {
// //     FIO;        //problem 1 //
// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         ll n;
// //         cin >> n;
// //         ll val = n&(n-1);

// //         if (val == 0) nn;
// //         else yy;
// //     }

// //     return 0;
// // }


// //--------------------------------------------


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

//     int a,b; cin >> a >> b;

//     int c = a^b;

//     cout << c << endl;
     
//     return 0;
// }


//-------------------------------------


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
        int a,b; cin >> a >> b;

        cout << (a^b) << endl;

        // if(a>b)
        // {
        //     int x =a;
        //     int ans = (x^b) + (x^a);
        //     cout << ans << endl;
        // } 
        // else
        // {
        //     int x =b;
        //     int ans = (x^b) + (x^a);

        //     cout << ans << endl;
        // }


    }
     
    return 0;
}
