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

bool is_palindrome(string s)
{

    for (int i = 0,j=s.size()-1; i < j; i++,j--)
    {
        if(s[i]!=s[j]) return false;
    }

    return true;
    
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int cnt = 0;
        string s;
        cin >> s;
        int x;
        cin >> x;

        map<string, bool> visited;
        while (visited[s]==false)
        {
            visited[s] = true;
            if (is_palindrome(s)) cnt++;

            int hr = (s[0] - '0') * 10 + s[1] - '0';
            int mnt = (s[3] - '0') * 10 + s[4] - '0';

            int h = x / 60;
            int m = x % 60;

            hr += h;
            mnt += m;

            if (mnt > 59)
            {
                hr++;
            }

            mnt = mnt % 60;
            hr = hr % 24;

            s[0] = (hr/10)+'0';
            s[1] = (hr%10)+'0';
            s[3] = (mnt/10)+'0';
            s[4] = (mnt%10)+'0';
        }

        cout << cnt << endl;
    }

    return 0;
}
