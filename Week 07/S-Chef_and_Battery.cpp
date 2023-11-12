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

        if(n<=50)
        {
            int diff = 50-n;
            if(diff%2==0) cout << diff/2 << endl;
            else cout << ((diff+1)/2)+2 << endl; 
        }
        else{
            int diff = n-50;
            if(diff%3==0) cout << diff/3 << endl;
            else if(diff%3==1) cout << (diff/3)+2 << endl;
            else if(diff%3==2) cout << ((diff+1)/3)+3 << endl;
            
        }

        
    }
     
    return 0;
}
