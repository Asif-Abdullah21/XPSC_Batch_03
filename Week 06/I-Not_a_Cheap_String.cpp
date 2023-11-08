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

bool cmp(pii a,pii b)
{
    return a.second<b.second;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int val;
        cin >> val;

        ll sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            sum += (s[i] - 96);
        }

        if (sum <= val)
        {
            cout << s << endl;
            continue;
        }

        vector<pair<char,int>> v;

        for (int i = 0; i < s.size(); i++)
        {
            v.push_back({s[i],i+1});
        }

        sort(v.begin(),v.end());

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].first << " " << v[i].second << endl;
        // }

        for (int i = s.size() - 1; i >= 0; i--)
        {
            //cout << sum << " " << p[i].first-96 << endl;
            if(sum > val)
            {
                sum = sum - (v[i].first - 96);
                v.pop_back();
            }
            else break;
        }

        sort(v.begin(),v.end(),cmp);

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first;
        }
        cout << endl;
    }

    return 0;
}





//----------------------------------------------------------------------------------




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

// bool cmp(pii a,pii b)
// {
//     return a.second<b.second;
// }

// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int val;
//         cin >> val;

//         ll sum = 0;

//         for (int i = 0; i < s.size(); i++)
//         {
//             sum += (s[i] - 96);
//         }

//         if (sum <= val)
//         {
//             cout << s << endl;
//             continue;
//         }

//         pair<char, int> p[s.size()];
//         for (int i = 0; i < s.size(); i++)
//         {
//             p[i].first = s[i];
//             p[i].second = i + 1;
//         }

//         sort(p, p + s.size());

//         // for (int i = 0; i < s.size(); i++)
//         // {
//         //     cout << p[i].first << " " << p[i].second << endl;
//         // }
//         int cnt = 0;

//         for (int i = s.size() - 1; i >= 0; i--)
//         {
//             //cout << sum << " " << p[i].first-96 << endl;
//             if(sum > val)
//             {
//                 sum = sum - (p[i].first - 96);
//                 cnt++;
//             }
//             else break;
//         }

//         int sz = s.size() - cnt;

//         sort(p,p+sz,cmp);

//         for (int i = 0; i < s.size() - cnt; i++)
//         {
//             cout << p[i].first;
//         }
//         cout << endl;
//     }

//     return 0;
// }
