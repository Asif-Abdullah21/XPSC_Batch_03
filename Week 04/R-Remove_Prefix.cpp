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
    int t;
    cin >> t;

    while (t--)
    {
        // int freq[200005] = {0};

        int n; cin >> n;
        int freq[n+4] = {0};
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i=0,j=0;

        while(j<n)
        {
            if(freq[a[j]]==1)
            {
                while (freq[a[j]]>0)
                {
                    freq[a[i]]--;
                    i++;
                }
                
            }
            freq[a[j]]++;
            j++;
        }

        cout << i << endl;
        
    }
     
    return 0;
}
