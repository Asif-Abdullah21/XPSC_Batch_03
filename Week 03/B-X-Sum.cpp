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
        int n,m; cin >> n >> m;

        int a[n+2][m+2];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
            
        }

        ll mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = a[i][j];

                int row = i-1;
                int col = j-1;

                while(row>=0 && col>=0) // upper left corner
                {
                    sum += a[row][col];
                    row--;
                    col--;
                }

                 row = i-1;
                 col = j+1;

                while(row>=0 && col<m) // upper right corner
                {
                    sum += a[row][col];
                    row--;
                    col++;
                }

                 row = i+1;
                 col = j-1;

                while(n>row && col>=0) // bottom left corner
                {
                    sum += a[row][col];
                    row++;
                    col--;
                }

                 row = i+1;
                 col = j+1;

                while(n>row && m>col) // bottom right corner
                {
                    sum += a[row][col];
                    row++;
                    col++;
                }

                mx = max(sum,mx);
            }
            
        }

        cout << mx << endl;
        
        
    }
     
    return 0;
}
