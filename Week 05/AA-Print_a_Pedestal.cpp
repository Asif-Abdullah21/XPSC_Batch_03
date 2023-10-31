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

        if(n%3==0)
        {
            cout << (n/3) << ' ' << (n/3)+1 << ' ' << (n/3)-1 << endl;
        }
        else{
            int first = (n/3)+2;

            int temp = n-first;

            int second = (temp/2)+1;
            int third = n-(first+second);

            cout << second << " " << first << " " << third << endl;

        }
    
    }
     
    return 0;
}

