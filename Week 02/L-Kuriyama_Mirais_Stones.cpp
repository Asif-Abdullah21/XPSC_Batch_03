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

    int n;
    cin >> n;

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b,b+n);

    int preA[n+2];
    int preB[n+2];

    preA[0] = a[0];
    preB[0] = b[0];

    for (int i = 1; i < n; i++)
    {
        preA[i] = preA[i-1] + a[i];
        preB[i] = preB[i-1] + b[i];
    }
    
    
    int t;
    cin >> t;

    while (t--)
    {
        int type, l , r;
        cin >> type >> l >> r;

        if(type==1)
        {
            if(l==1) cout << preA[r-1] << endl;
            else cout << preA[r-1] - preA[l-2] << endl;
        }
        else
        {
            if(l==1) cout << preB[r-1] << endl;
            else cout << preB[r-1] - preB[l-2] << endl;
        }
    }
     
    return 0;
}
