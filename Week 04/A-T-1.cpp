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
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;

    for (int i = 0; i <(1<<n); i++)
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
        {
            int mask = 1<<j;
            if((mask&i)==0)
            {
                sum -= a[j];
            }
            else sum += a[j];
        }

        //cout << sum << endl;

        if(sum%360==0)
        {
            flag = true;
            break;
        }
        
    }

    if(flag) yy;
    else nn;
    
    
     
    return 0;
}
