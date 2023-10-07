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
    int n, x;
    cin >> n >> x;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
         int k; cin>> k;

         if(k!=x) v.push_back(k);
    }

    for(auto it:v) cout << it << " ";

    cout << endl;
    

    
     
    return 0;
}
