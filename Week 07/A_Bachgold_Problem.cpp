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

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int x = n / 2;
        cout << x << endl;

        for (int i = 0; i < x; i++)
        {
            cout << 2 << " ";
        }

        cout << endl;
        return 0;
    }

  

    n = n - 3;

    int x = n / 2;

    cout << x+1 << endl;

      cout << 3 << " ";

    for (int i = 0; i < x; i++)
    {
        cout << 2 << " ";
    }

    cout << endl;

    return 0;
}
