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
        int n,s,r; cin >> n >> s >> r;
        int a[n];

        a[0] = s-r;

        int x = r/(n-1);
        int rem = r%(n-1);

        for (int i = 1; i < n; i++)
        {
            if(rem>0)
            {
                a[i] = x+1;
                rem--;
            }
            else a[i] = x;
        }
        

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
        
        
        
    }
     
    return 0;
}
