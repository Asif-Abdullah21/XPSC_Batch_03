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
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int q; cin >> q;

    while (q--)
    {
        int x; cin >> x;

        auto lwrIt = lower_bound(v.begin(),v.end(),x);
        
        int lwrIndx = lwrIt - v.begin();

        auto uprIt = upper_bound(v.begin(),v.end(),x);
        
        int uprIndx = uprIt - v.begin();

        if(lwrIndx<1) cout << "X ";
        else cout << v[lwrIndx-1] << " ";

        // cout << uprIndx << endl;

        if(uprIndx<n) cout << v[uprIndx] << endl;
        else cout<< "X" << endl;

        
        

    }
    
    
     
    return 0;
}



