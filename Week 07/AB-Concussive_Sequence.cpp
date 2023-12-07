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
        int a[n];
        int b[n];
        int c[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            c[i] = a[i];
        }

        sort(a, a + n);
        int j = 0;

        for (int i = 0; i < n; i += 2)
        {
            b[i] = a[j];
            j++;
        }

        for (int i = 1; i < n; i += 2)
        {
            b[i] = a[j];
            j++;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << endl;
        j = 0;

        for (int i = 1; i < n; i += 2)
        {
            c[i] = a[j];
            j++;
        }

        for (int i = 0; i < n; i += 2)
        {
            c[i] = a[j];
            j++;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << c[i] << " ";
        // }
        // cout << endl;

        int f = 2;
        for (int i = 1; i < n - 1; i++)
        {
            if (i % 2 != 0)
            {
                if (b[i] > b[i - 1] && b[i] > b[i + 1])
                    f++;
            }
            else
            {
                if (b[i] < b[i - 1] && b[i] < b[i + 1])
                    f++;
            }
        }

        if (f == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int f = 2;
            for (int i = 1; i < n - 1; i++)
            {
                if (i % 2 != 0)
                {
                    if (c[i] < c[i - 1] && c[i] < c[i + 1])
                        f++;
                }
                else
                {
                    if (c[i] > c[i - 1] && c[i] > c[i + 1])
                        f++;
                }
            }

            if (f == n)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << c[i] << " ";
                }
                cout << endl;
            }
            else cout << -1 << endl;
        }
    }

    return 0;
}
