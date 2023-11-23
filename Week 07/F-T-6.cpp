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
    ll n,k; cin >> n >> k;

    vector<ll> v;

    for (ll i = 1; i*i <=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);

            if(i!=(n/i)) v.push_back(n/i);
        }
    }

    v.push_back(1);

    sort(v.begin(),v.end());

    if(n!=1) v.push_back(n);

    //for(auto it:v) cout << it << " ";
    //cout << v.size();
    
    if(v.size()<k) cout << -1 << endl;
    else cout << v[k-1] << endl;
    
     
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
//     ll n,k; cin >> n >> k;

//     vector<ll> v;

//     for (ll i = 2; i*i <=n; i++)
//     {
//         if(n%i==0)
//         {
//             v.push_back(i);

//             if(i!=(n/i)) v.push_back(n/i);
//         }
//     }

//     v.push_back(1);

//     sort(v.begin(),v.end());

//     if(n!=1) v.push_back(n);

//     //for(auto it:v) cout << it << " ";
//     //cout << v.size();
    
//     if(v.size()<k) cout << -1 << endl;
//     else cout << v[k-1] << endl;
    
     
//     return 0;
// }
