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
    
        int a,b; cin >>a >> b;

        int ans = a+b+(a*b);

        cout << ans;

        string s = to_string(ans);
        int f=1;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!='1')
            {
                f=0;
                break;
            }

        }

        if(f) yes;
        else no;
        
    
     
    return 0;
}
