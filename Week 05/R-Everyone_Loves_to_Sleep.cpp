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

bool cmp(pii a, pii b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;

        pii p[n];

        for (int i = 0; i < n; i++)
        {
            cin >> p[i].first;
            cin >> p[i].second;
        }

        sort(p, p + n, cmp);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << p[i].first << " "<< p[i].second << endl;
        // }

        int hr = -1, mnt = -1;

        for (int i = 0; i < n; i++)
        {
            if (p[i].first > h)
            {
                hr = p[i].first;
                mnt = p[i].second;
                break;
            }
            else if (p[i].first >= h && p[i].second >= m)
            {
                hr = p[i].first;
                mnt = p[i].second;
                break;
            }
        }

        if (hr == -1 && mnt == -1)
        {
            hr = p[0].first;
            mnt = p[0].second;

            int totalMnt = 1440 - ((h * 60) + m);

            totalMnt += ((hr * 60) + mnt);

            int ansHr = totalMnt / 60;
            int ansMnt = totalMnt % 60;

            cout << ansHr << " " << ansMnt << endl;

            continue;
        }

        int totalMnt1 = (h * 60) + m;
        int totalMnt2 = (hr * 60) + mnt;

        int mntDiff = abs(totalMnt1 - totalMnt2);

        int ansHr = mntDiff / 60;
        int ansMnt = mntDiff % 60;

        cout << ansHr << " " << ansMnt << endl;

        // cout << hr << " " << mnt << endl;
    }

    return 0;
}
