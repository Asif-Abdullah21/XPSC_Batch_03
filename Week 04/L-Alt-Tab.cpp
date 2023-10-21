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
    map<string,bool> mp;
    vector<string> v;

    while (t--)
    {
        string s; cin>> s;
        v.push_back(s);
        mp[s] = true;
    }

    string s;

    for (int i = v.size()-1;i>=0; i--)
    {
        //cout << v[i] << endl;
        if(mp[v[i]])
        {
            s+=v[i][v[i].size()-2];
            s+=v[i][v[i].size()-1];
            mp[v[i]] = false;
        }
       // cout << s << endl;

    }

    cout << s << endl;
    
     
    return 0;
}
