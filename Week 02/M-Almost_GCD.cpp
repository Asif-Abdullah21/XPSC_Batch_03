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
    int n;
    cin >> n;

    int a[n];
    int freq[1005]={0};
    int mx_val=0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx_val = max(mx_val,a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sqrt(a[i]); j++)
        {
            if(a[i]%j==0)
            {
                freq[j]++;
                if(a[i]/j!=j) freq[a[i]/j]++;
            }
        }
    }

    int mx = 0;
    int ans;

    for (int i = 2; i <= mx_val; i++)
    {
       // cout << i << " " << freq[i] << endl;
        if(freq[i]>=mx)
        {
            ans = i;
            mx = freq[i];
        }
    }

    cout << ans << endl;
    
    
    
     
    return 0;
}
