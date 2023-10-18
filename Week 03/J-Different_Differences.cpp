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
        int n, k;
        cin >> n >> k;

        int a[n + 5];
        int j = 1;
        a[0] = 1;
        int rem = n - 2;

        int i=1;
        while(a[i-1]+j+rem<=k)
        {
            a[i] = a[i-1]+j;
            i++;
            j++;
            rem--;
        }

        for (int k = i; k < n; k++)
        {
            a[k] = a[k-1]+1;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
        
    }

    return 0;
}





// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
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

// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         int a[n + 5];
//         int j = 1;
//         a[0] = 1;
//         int temp = n - 1;

//         for (int i = 1; i < n; i++)
//         {
//             cout << a[i - 1] + j+(k-i+1) << " ";
//             if (a[i - 1] + j+(k-i+1) <= k)
//             {
//                 a[i] = a[i - 1] + j;
//                 j++;
//                 temp--;
//             }
//             else
//                 a[i] = a[i - 1] + 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
