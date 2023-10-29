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

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n,h; cin >> n >> h;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        ll ans=0;

        ll l=0,r=1e18;

        while (l<=r)
        {
            ll mid = l+(r-l)/2;

            bool flag = false;

            ll sum =0;

            for (int i = 0; i < n; i++)
            {
                if(a[i]>mid)
                {
                    sum += a[i];
                }
            }

         //   cout << l << " " << mid << " " << r << endl;

            if(h-sum>0) flag = true;

            if(flag)
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
            
        }

        cout << ans << endl;
        
        


    }
     
    return 0;
}




// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define no (cout << "No\n")
// #define yes (cout << "Yes\n")
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;

// bool cmp(int a,int b)
// {
//     return a>b;
// }

// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n,h; cin >> n >> h;

//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         sort(a,a+n,cmp);

//         ll sum =0;
//         int i=0;

//         int ans=0;

//         while (i<n)
//         {
//             sum += a[i];
//             //cout << a[i] << " ";

//             if(sum>=h)
//             {
//                 ans = a[i];
//                 break;
//             }
//             i++;
//         }

//         cout << ans << endl;
        
        


//     }
     
//     return 0;
// }
