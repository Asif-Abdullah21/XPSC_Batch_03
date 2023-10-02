
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
    string s; cin >> s;
    int cnt=0;

    for (int i = 0; i < n-2; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C') cnt++;
    }

    cout << cnt << endl;
    
     
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
//     int n; cin >> n;
//     string s; cin >> s;
//     int cnt=0;

//     for (int i = 0; i < n-2; i++)
//     {
//         if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')
//         {
//              cnt++;
//              i+=2;
//         }
//     }

//     cout << cnt << endl;
    
     
//     return 0;
// }

