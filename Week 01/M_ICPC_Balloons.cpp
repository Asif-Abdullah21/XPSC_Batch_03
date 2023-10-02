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
        int n;cin >> n;

        string s;
        cin >> s;

        int cnt[26] ={0};

        for (int i = 0; i < n; i++)
        {
            cnt[s[i]-'A']++;
        }

        int ans=0;

        for (int i = 0; i < 26; i++)
        {
            if(cnt[i]!=0)
            {
                ans+=cnt[i]+1;
            }
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
//         int n;
//         cin>> n;
//         string s;
//         cin >> s;

//         sort(s.begin(),s.end());

//         int cnt=n+1;

//         for (int i = 0; i < s.size()-1; i++)
//         {
//             if(s[i]!=s[i+1]) cnt++;
//         }

//         cout << cnt << endl;
         
//     }
     
//     return 0;
// }
