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
        int n,k; cin >> n >>k;

        int a[n+5];
        a[0] = 1;
        int i=1;
        int cnt=2;

        while (a[i-1]+i+(n-cnt)<=k)
        {
            //cout << a[i-1]+j << " + " <<(n-cnt) << endl;
            a[i] = a[i-1]+i;
            i++;
            cnt++;
        }


        for (int k = i; k < n; k++)
        {
            a[k] = a[k-1]+1;
        }
        
        

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
        
        
        
    }
     
    return 0;
}
