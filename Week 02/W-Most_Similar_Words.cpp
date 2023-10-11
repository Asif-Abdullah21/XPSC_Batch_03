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
        int size; cin >> size;
        vector<string> v;

        for (int i = 0; i < n; i++)
        {
            string s; cin >> s;

            v.push_back(s);
        }

        int mn = INT_MAX;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int x = 0;
                for (int k = 0; k < size; k++)
                {
                    x += abs((v[i][k])-(v[j][k])); 
                    
                }
                mn = min(mn,x);
            }
            
        }

        cout << mn << endl;
        
        
    }
     
    return 0;
}
