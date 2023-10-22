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
        int n;
        cin >> n;
        char ch;
        cin >> ch;

        string s;
        cin >> s;

        if (ch == 'g')
            cout << 0 << endl;
        else
        {
            s += s;
            int cnt = 0;
            int mx = INT_MIN;
            int f=0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ch)
                {
                    f=1;
                    cnt++;
                }
                else if(s[i]=='g')
                {
                    mx = max(cnt,mx);
                    cnt=0;
                    f=0;
                    if(i>n) break;
                }
                else if(f) cnt++;
            }

            cout << mx << endl;
        }


    }

    return 0;
}
