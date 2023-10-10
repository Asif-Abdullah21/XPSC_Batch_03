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

        for (int i = 0; i < n; i++)
        {
            int size; cin >> size;
            string s; cin >> s;

            for (int j = 0; j < size; j++)
            {
                if(s[j]=='D')
                {
                    a[i]++;
                    if(a[i]==10) a[i] = 0;
                }
                else if(s[j]=='U')
                {
                    a[i]--;
                    if(a[i]==-1) a[i] = 9;
                }
            }
            
        }
        

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
        
        
    }
     
    return 0;
}
