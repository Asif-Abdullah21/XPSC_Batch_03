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

        vector<string> v;
        map<string,bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s; cin >> s;

            v.push_back(s);

            mp[v[i]] = true;
        }

        string ans;

        for (int i = 0; i < v.size(); i++)
        {
            string tempStr = v[i];
            int f=0;

            string a;
            for (int j = 0; j < tempStr.size()-1; j++)
            {
                a += tempStr[j];
                string b;
                for (int k = j+1; k < tempStr.size(); k++)
                {
                    b += tempStr[k];
                }
                
                //cout << a << " " << b << endl;
                if(mp[a]==true && mp[b]==true)
                {
                    f=1;
                    break;
                }

                //b.clear();  
            }
           // a.clear();


            if(f) ans += '1';
            else ans += '0';
            
            
        }


        cout << ans << endl;
         
    }
     
    return 0;
}
