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
        int n; cin >> n;
        int k; cin >> k;

        map<int,multiset<int>> mp;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].insert(i+1);
        }

        while (k--)
        {
           int l,r; cin >>l >> r;

           if(mp.find(l)==mp.end() || mp.find(r)==mp.end()) nn;//    if(mp[r].size()==0 || mp[l].size()==0) nn;
           else if(*mp[r].rbegin()>= *mp[l].begin()) yy;
           else nn;
        }
        

      
        //  for(auto it = mp.begin(); it != mp.end(); it++){
        //     cout << it->first << " " << *it->second.begin() << " " << *it->second.begin() << endl;
        // }

        // for(auto it:mp)
        // {
        //     cout << it.first << " - ";
        //     for(auto val:it.second)
        //     {
        //         cout << val << " ";
        //     }

        //     cout << endl;
        // }

       
    
        
    }
     
    return 0;
}
