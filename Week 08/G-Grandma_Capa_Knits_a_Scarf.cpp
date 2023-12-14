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
        cin >> n;
        string s;
        cin >> s;
        int ans = INT_MAX;
        int f = -1;

        for (char i = 'a'; i <= 'z'; i++)
        {
            int cnt = 0;
            bool flag = true;
            for (int l = 0, r = n - 1; l < r;)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == i)
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[r] == i)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else{
                    l++;
                    r--;
                }
            }

            if (flag)
            {
                ans = min(ans, cnt);
                f = ans;
            }
        }

        cout << f <<endl;
    }

    return 0;
}
