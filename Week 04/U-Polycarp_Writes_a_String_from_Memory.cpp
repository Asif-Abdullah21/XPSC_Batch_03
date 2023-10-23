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
        string s; cin >> s;

        set<char> st;
        int ans=0;

        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            if(st.size()>3)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
            
        }

        if(!st.empty()) ans++;

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
//         string s; cin >> s;

//         set<char> st;
//         int ans=0;

//         for (int i = 0; i < s.size(); i++)
//         {
//             int tm = st.size();
//             st.insert(s[i]);
//            // cout << tm << " " <<st.size()<< endl;
//             if(st.size()!=tm && st.size()>3)
//             {
//                 ans++;
//                 st.clear();
//                 st.insert(s[i]);
//                 tm=1;
//             }
            
//         }

//         if(!st.empty()) ans++;

//         cout << ans << endl;
         
//     }
     
//     return 0;
// }
