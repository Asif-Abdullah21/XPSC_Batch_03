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

bool isValid(int mid,int a[],int n)
{
    int val = a[0]+mid;
    int cnt=1;
    for (int i = 1; i < n; i++)
    {
        if(abs(a[i]-val)>mid)
        {
            cnt++;
            val = a[i]+mid;
        }
    }

    if(cnt<=3) return true;
    else return false;
    
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l=0,r=INT_MAX;
        int ans;

        sort(a,a+n);

        while (l<=r)
        {
            int diff = l+(r-l)/2;
          //  cout << l << " " << diff << " " << r << endl;

            if(isValid(diff,a,n))
            {
                ans = diff;
                r = diff-1;
            }
            else l = diff+1;
        }

        cout << ans << endl;
        
        
    }
     
    return 0;
}
