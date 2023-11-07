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
    return a.first>b.first;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n,k,l; cin >> n >> k >>l;
        pair<int,int> p[n];
        map<int,int> mp;
        int cnt=0;

        vector<pair<int,int>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first;
            cin >> p[i].second;

            
            if(l==p[i].second)
            {
                v.push_back({p[i].first,p[i].second});
            }
        }

        if(v.size()<k){
            cout << -1 << endl;
            continue;
        }

        sort(v.begin(),v.end(),cmp);

        // for(auto it:v)
        // {
        //     cout << it.first << " " <<it.second << endl;
        // }

        ll sum =0;

        for (int i = 0; i < k; i++)
        {
            sum += v[i].first;
        }

        cout << sum << endl;
        
        
    }
     
    return 0;
}
