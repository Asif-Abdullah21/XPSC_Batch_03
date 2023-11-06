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
        int n,k; cin >>  n >>k;
        string s; cin >> s;

        int i=0,j=0;
        int cnt=0;
        int mx = INT_MIN;

        while (j<n)
        {
           // cout << s[j] << " " << j << endl;
            if(s[j]=='B') cnt++;

            if(j>=k-1)
            {
                mx = max(cnt,mx);
              //  cout << mx << endl;
                if(s[i]=='B') cnt--;
                i++;
            }
            j++;
        }

        cout << max(0,k-mx) << endl;
         
    }
     
    return 0;
}
