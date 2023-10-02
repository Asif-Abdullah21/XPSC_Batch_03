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
        int n;
        cin >> n;

        vector<string> v[3];

        map<string, int> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                v[i].push_back(s);
                mp[s]++;
            }
        }

        // for (int i = 0; i < 3; i++)
        // {
        //     for(auto it:v[i])
        //     {
        //         cout << it <<" ";
        //     }
        //     cout << endl;
        // }

        for (int i = 0; i < 3; i++)
        {
            int cnt=0;
            for(auto it:v[i])
            {
                if(mp[it]==1) cnt+=3;
                else if(mp[it]==2) cnt+=1;
            }
            cout << cnt << " ";
        }

        cout << endl;

        
      
        



        // mp.clear();

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
//         cin >> n;

//         vector<string> v1;
//         vector<string> v2;
//         vector<string> v3;

//         map<string,int> mp;

//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             mp[s]++;
//             v1.push_back(s);
//         }

//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//              mp[s]++;
//             v2.push_back(s);
//         }

//         for (int i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             mp[s]++;
//             v3.push_back(s);
//         }

//         int cnt1=0,cnt2=0,cnt3=0;
//         for (int i = 0; i < n; i++)
//         {
//             if(mp[v1[i]]==1) cnt1 += 3;
//             else if(mp[v1[i]]==2) cnt1 += 1;

//             if(mp[v2[i]]==1) cnt2 += 3;
//             else if(mp[v2[i]]==2) cnt2 += 1;

//             if(mp[v3[i]]==1) cnt3 += 3;
//             else if(mp[v3[i]]==2) cnt3 += 1;

//         }

//         cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;

//         //mp.clear();

//     }

//     return 0;
// }
