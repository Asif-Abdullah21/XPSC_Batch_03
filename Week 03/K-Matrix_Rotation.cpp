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
        int a,b,c,d; cin >> a >> b >> c >> d;

        int f=0;

        if(a<b && c<d && a<c && b<d) f=1;
        if(c<a && d<b && c<d && a<b) f=1;
        if(d<c && b<a && d<b && c<a) f=1;
        if(b<d && a<c && b<a && d<c) f=1;

        if(f) yy;
        else nn;

        
    }
     
    return 0;
}
