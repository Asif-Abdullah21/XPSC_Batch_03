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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            int cnt=0;
            while (a[i]%2==0)
            {
                cnt++;
                a[i] /=2;
            }

            total += cnt;
            
        }

       // int more = 0;
        vector<int> v;
        
        for (int i = 2; i <=n; i++)
        {
            int temp = i;
            int cnt=0;
            while (temp%2==0)
            {
                cnt++;
                temp /=2;
            }
            v.push_back(cnt);
            //more += cnt;
        }

      //  total = total+more;

       // cout << total << endl;

       if(total>=n) cout << 0 << endl;
       else{
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        for (int i = 0; i < v.size(); i++)
        {
            total += v[i];
            ans++;
            if(total>=n) break;
        }

        if(total<n) cout << -1<< endl;
        else cout << ans << endl;
        
           
       }
        
    }
     
    return 0;
}
