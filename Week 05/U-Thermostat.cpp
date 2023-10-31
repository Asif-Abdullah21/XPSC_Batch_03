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
        int l, r, x, a, b;

        cin >> l >> r >> x;

        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        if (abs(a - b) >= x)
        {
            cout << 1 << endl;
            continue;
        }

        if (b > a)
        {
            if ((b + x <= r) || (a - x >= l))  cout << 2 << endl;
            else if((a+x<=r) && (b-x>=l)) cout << 3 << endl;
            else cout <<-1 << endl;
        }
        else
        {
            if ((a + x <= r) || (b - x >= l))  cout << 2 << endl;
            else if((b+x<=r) && (a-x>=l)) cout << 3 << endl;
            else cout <<-1 << endl;
        }

    }

    return 0;
}
