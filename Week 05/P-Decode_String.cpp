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
        string s; cin >> s;
        vector<char> v;

        for (int i = s.size()-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                int val;

                val = 10*(s[i-2]-'0');
                val += (s[i-1]-'0');

               // cout << val << endl;
                
                v.push_back(val+96);
                i-=2;
            }
            else{
                v.push_back((s[i]-'0')+'a'-1);
            }
        }

        reverse(v.begin(),v.end());

        for(auto it:v) cout << it;

        cout << endl;
        
    }
     
    return 0;
}
