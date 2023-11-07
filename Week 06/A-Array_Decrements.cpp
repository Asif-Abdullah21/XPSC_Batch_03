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
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int f=0;

        for (int i = 0; i < n; i++)
        {
            if(b[i]>a[i]){
                f=1;
                break;
            }
        }

        if(f)
        {
            nn;
            continue;
        }

        set<int> s; 
        int ZeroDiff=0;

        for (int i = 0; i < n; i++)
        {
            if(b[i]!=0) s.insert(a[i]-b[i]);
            else ZeroDiff = max((a[i]-b[i]),ZeroDiff);
        }

        if(s.size()==0)
        {
            yy;
            continue;
        }

        if(s.size()==1){
            auto it = s.begin();
          //  cout <<*it << " " << ZeroDiff<< endl;;
            if(ZeroDiff<=*it) yy;
            else nn;
        }
        else nn;
        
        
         
    }
     
    return 0;
}
