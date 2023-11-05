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
    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;
        pair<int,int> p[n];

        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> p[i].second;
        }

        vector<int> v;
        v.push_back(p[0].second-p[0].first);

        for (int i = 1; i < n; i++)
        {
            if(p[i-1].second>=p[i].first)
            {
                v.push_back(p[i].second-p[i-1].second);
            }
            else v.push_back(p[i].second-p[i].first);
        }

        for(auto it:v) cout << it << " ";

        cout << endl;
        
        
    }
     
    return 0;
}
