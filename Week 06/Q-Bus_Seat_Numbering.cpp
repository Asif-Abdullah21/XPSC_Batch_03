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
        int n; cin >> n;

        if(n>=1 && n<=10) cout << "Lower Double\n"; 
        else if(n>=11 && n<=15) cout << "Lower Single\n"; 
        else if(n>=16 && n<=25) cout << "Upper Double\n"; 
        else if(n>=26 && n<=30) cout << "Upper Single\n"; 
    }
     
    return 0;
}
