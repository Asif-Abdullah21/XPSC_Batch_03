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

bool isValid(ll mid,ll s)
{
    string str = to_string(mid);

    ll sum = 0;

    for (int i = 0; i < str.size(); i++)
    {
        sum += (str[i]-'0');
    }

    if(mid-sum>=s) return true;
    else return false;
    
}

int main()
{
    FIO;
    ll n,s; cin >> n >> s;

    if(isValid(n,s)==false)
    {
        cout << 0 << endl;
        return 0;
    }

    ll l=0,r=n;

    ll ans;

    while (l<=r)
    {
        ll mid = l+(r-l)/2;

        if(isValid(mid,s))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout << n-ans+1 << endl; // ans = lowest really big number, er por theke sob big number
    
     
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

// bool isValid(ll mid,ll s)
// {
//     string str = to_string(mid);

//     ll sum = 0;

//     for (int i = 0; i < str.size(); i++)
//     {
//         sum += (str[i]-'0');
//     }

//     if(mid-sum>=s) return true;
//     else return false;
    
// }

// int main()
// {
//     FIO;
//     ll n,s; cin >> n >> s;

//     ll l=0,r=n;

//     ll ans=n+1;

//     while (l<=r)
//     {
//         ll mid = l+(r-l)/2;

//         if(isValid(mid,s))
//         {
//             ans = mid;
//             r = mid-1;
//         }
//         else l = mid+1;
//     }

//     cout << n-ans+1 << endl;
    
     
//     return 0;
// }

