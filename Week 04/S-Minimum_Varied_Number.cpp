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
        int n; cin >> n;

        if(n<10){
             cout << n << endl;
             continue;
        }

        int k=9, sum=0;
        vector<char> v;

        while (sum+k<n)
        {
            sum += k;
            v.push_back(k+'0');
            k--;
        }

        v.push_back(((n-sum)+'0'));

        sort(v.begin(),v.end());

        for(auto it:v) cout << it;

        cout << endl;
        
    }
     
    return 0;
}


/*

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test; //muhammad_sayem

    while(test--){
        int n, i;
        cin >> n;
        vector<int> v;

        for(i=9; i>=1; i--){
            if(i <= n) {
                v.pb(i);
                n -= i;
            }
        }

        reverse(v.begin(), v.end());

        for(auto val: v){
            cout << val;
        }
        cout << endl;
    }

    return 0;
}



*/