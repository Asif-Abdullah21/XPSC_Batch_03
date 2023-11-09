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
        string s; cin >> s;
        int cnt1=0,cnt0=0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1') cnt1++;
            else cnt0++;
        }

       // cout << cnt<< endl;

        int jora = min(cnt1,cnt0);
       // cout << jora << endl;

        if(jora%2==0) cout << "Ramos\n";
        else cout << "Zlatan\n";
    }
     
    return 0;
}
