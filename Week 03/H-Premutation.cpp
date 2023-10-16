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

        vector<int> v[n+1];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for(auto it:v[i]) cout <<it << " ";

        //     cout << endl;
        // }

        int freq[200] = {0};

        for (int i = 0; i < n; i++)
        {
            int x = v[i].front();
            freq[x]++;
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int x = v[i].front();
            if(freq[x]==n-1){
                 ans.push_back(x);
                 break;
            }
        }
        

        for (int i = 0; i < n; i++)
        {
            int x = v[i].front();
            if(freq[x]==1) 
            {
                for (int j = 0; j < n-1; j++)
                {
                    ans.push_back(v[i][j]);
                }
            }
        }

        for(auto it:ans) cout << it << " ";

        cout << endl;
        

        
        
    }
     
    return 0;
}
