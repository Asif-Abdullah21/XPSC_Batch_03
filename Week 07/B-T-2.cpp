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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

      
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int curr = a[i];

            for (int j = 2; j * j <= curr; j++)
            {
                while (curr % j == 0)
                {
                    mp[j]++;
                    curr /= j;
                }
            }
            if (curr > 1)
                mp[curr]++;
        }
        bool flag = true;

        for (auto it : mp)
        {
           // cout << it.first << " " <<it.second << endl;
            if (it.second % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            yy;
        else
            nn;
    }

    return 0;
}
