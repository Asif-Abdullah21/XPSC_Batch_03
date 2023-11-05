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
        int n; cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = n;

        ll Segsum =0;

        for (int i = 0; i < n; i++)
        {
            Segsum += a[i];

            int mxCnt=i+1;
            ll sum =0;
            int cnt=0;

            for (int j = i+1; j < n; j++)
            {
                if(sum+a[j]>Segsum)
                {
                    break;;
                }
                else{
                    sum += a[j];
                    cnt++;
                }

               // cout << sum << " ";

                // cout << cnt <<" " << mxCnt<< endl;

                if(sum==Segsum && j==n-1)
                {
                    mxCnt = max(cnt,mxCnt);
                    ans = min(ans,mxCnt);
                    break;
                }
                if(sum==Segsum)
                {
                    mxCnt = max(cnt,mxCnt);
                    sum = 0;
                    cnt=0;
                }
            }
            
        }

        cout << ans << endl;
        

        
    }
     
    return 0;
}
