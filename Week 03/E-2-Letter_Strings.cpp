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

        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<char,ll> mp1;
        map<char,ll> mp2;
        map<string,ll> mp;

        for (int i = 0; i < n; i++)
        {
            mp1[v[i][0]]++;
            mp2[v[i][1]]++;
            mp[v[i]]++;
        }

        ll ans =0;


        for (int i = 0; i < n; i++)
        {
            ans += mp1[v[i][0]];
            ans -= mp[v[i]];

            ans += mp2[v[i][1]];
            ans -= mp[v[i]];

            if(mp1[v[i][0]] > 0) mp1[v[i][0]]--;
            if(mp2[v[i][1]] > 0) mp2[v[i][1]]--;
            if(mp[v[i]] > 0) mp[v[i]]--;
        }

        cout << ans << endl;

        

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
//         int n; cin >> n;

//         vector<string> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         map<char,ll> mp1;
//         map<char,ll> mp2;
//         map<string,ll> mp;

//         for (int i = 0; i < n; i++)
//         {
//             mp1[v[i][0]]++;
//             mp2[v[i][1]]++;
//             mp[v[i]]++;
//         }

//         ll ans =0;


//         for (int i = 0; i < n; i++)
//         {
//             ans += mp1[v[i][0]];
//             ans -= mp[v[i]];

//             ans += mp2[v[i][1]];
//             ans -= mp[v[i]];
//         }

//         cout << ans/2 << endl;

        

//     }
     
//     return 0;
// }
