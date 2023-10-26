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
        int b;
        cin >> b;

        vector<int> v;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if ((a[i] & b) == b)
            {
                v.push_back(a[i]);
            }
        }

        for (auto it : v)
            cout << it << " ";
        cout << endl;

        int ans = -1;
        for (int i = 0; i < v.size(); i++)
        {
            ans = (ans & v[i]);
        }

        if (ans == b) yy;
        else nn;
    }

    return 0;
}
