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
    int i=1;
    int n,q;

    while (cin >> n >> q,n+q)
    {
        cout << "CASE# " <<i << ":\n";
        i++;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        while (q--)
        {
            int val; cin >>val;

            int l=0,r=n-1;

            int ans =-1;

            while (l<=r)
            {
                int mid = l + (r-l)/2;

                if(a[mid]==val)
                {
                    ans = mid;
                    r = mid-1;
                }
                else if(a[mid]>val)
                {
                    r = mid-1;
                }
                else l = mid+1;
            }


            if(ans==-1) cout << val << " not found" << endl;
            else cout << val << " found at " << ans+1 << endl;
            
        }
        
        
    }
     
    return 0;
}



/*
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
    int i=1;

    while (true)
    {
        int n,q; cin >> n >> q;

        if(n==0 && q==0)
        {
            break;
        }

        cout << "CASE# " <<i << ":\n";
        i++;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        while (q--)
        {
            int val; cin >>val;

            int l=0,r=n-1;

            int ans =-1;

            while (l<=r)
            {
                int mid = l + (r-l)/2;

                if(a[mid]==val)
                {
                    ans = mid;
                    r = mid-1;
                }
                else if(a[mid]>val)
                {
                    r = mid-1;
                }
                else l = mid+1;
            }


            if(ans==-1) cout << val << " not found" << endl;
            else cout << val << " found at " << ans+1 << endl;
            
        }
        
        
    }
     
    return 0;
}


*/