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
        int n;
        char ch;
        cin >> n >> ch;

        string s;
        cin >> s;
        int f = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ch)
            {
                f = 0;
                break;
            }
        }

        if (f)
        {
            cout << 0 << endl;
            continue;
        }
        bool flag = true;

        for (int i = 2; i <= n; i++)
        {
            int f = 1;
            if (s[i - 1] == ch)
            {
                for (int j = i; j <= n; j += i)
                {
                    if (s[j - 1] != ch)
                    {
                        f = 0;
                        break;
                    }
                }

                if (f)
                {
                    cout << 1 << endl;
                    cout << i << endl;
                    flag = false;
                    break;
                }
            }
        }

        if(flag)
        {
            cout << 2 << endl;
            cout << n << " " << n-1 << endl;
        }
    }

    return 0;
}
