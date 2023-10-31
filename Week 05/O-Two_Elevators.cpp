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
        int a,b,c;

        cin >> a >> b >> c;

        int first = a-1;
        int second;
        if(c>b)
        {
            second = (c-b)+(c-1);
        } 
        else second = b-1;

       // cout << first << " " << second << endl;

        if(first<second) cout << 1 << endl;
        else if(second<first) cout <<2 << endl;
        else cout << 3 << endl;
    }
     
    return 0;
}
