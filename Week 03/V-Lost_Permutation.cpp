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
        int freq[100] = {0};
        int n; cin >> n;
        int sum; cin >> sum;

        int a[n];
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            mx = max(a[i],mx);
        }

     
        int s=0;
        int f=0;

        for (int i = 1; i <=mx; i++)
        {
            if(freq[i]==0) s += i;
        }

        if(s==sum) f=1;

        int j=mx+1;


        while(s<=sum)
        {
             s += j;
      //      cout << s << " " << j << endl;       

            if(s==sum){
                f=1;
                break;
            }

            j++;
        }

        if(f) yy;
        else nn;
        


        
    }
     
    return 0;
}


/*

#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;             /// Abid vai ///

    int test;
    cin >> test;

    while(test--){
        int n, s, i;
        cin >> n >> s;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int cnt[10001] = {0};
        int maxx = 0;       /// shorboccho element ///

        for(i=0; i<n; i++){
            maxx = max(maxx, a[i]);
            cnt[a[i]] = 1;
        }

        for(i=1; i<=maxx; i++){
            if(cnt[i] == 0){
                s-=i;
            }
        }

        while(s>0){
            maxx++;
            s -= maxx;
        }

        if(s == 0) cout << yes << endl;
        else cout << no << endl;
    }

    return 0;
}

 


*/