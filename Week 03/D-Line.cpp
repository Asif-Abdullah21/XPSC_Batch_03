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

        string s; cin >> s;

        int left[n+2]={0};
        int right[n+2]={0};

        for (int i = 0;i<s.size();i++)
        {
            left[i] = i;
            right[i] = n-i-1;
        }

        // for (int i = s.size()-1,j=0; i>=0; i--,j++)
        // {
        //     right[j] = i;
        // }

        // for (int i = 0; i < s.size(); i++)
        // {
        //     cout << left[i] << " " << right[i] << endl;
        // }
        

        ll ans =0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='L') ans += left[i];
            else ans += right[i];
        }

      ///  cout << ans << endl;

        int k=0;

        vector<ll> v;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='L')
            {
                if(left[i]<right[i]) 
                {
                    int temp = right[i]-left[i];
                    v.push_back(temp);
                }
                else v.push_back(0);
            }
            else
            {
                if(left[i]>right[i]) 
                {
                    int temp = left[i]-right[i];
                    v.push_back(temp);
                }
                else v.push_back(0);
            }

        }

        sort(v.begin(),v.end(),greater<ll>());

        ll pre[n+2];
        pre[0] = v[0];

        for (int i = 1; i < v.size(); i++)
        {
            pre[i] = pre[i-1] + v[i];
        }

        for (int i = 0; i < s.size(); i++)
        {
            cout << ans+pre[i] << " ";
        } 
        
        
        cout << endl;
        
    }
     
    return 0;
}
