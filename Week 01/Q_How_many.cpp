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

    int s,t;
    cin >> s >> t;
    int cnt=0;

    for (int i = 0; i <=100; i++)
    {
        for (int j = 0; j <=100; j++)
        {
            for (int k = 0; k <=100; k++)
            {
                if(i+j+k<=s && i*j*k<=t) cnt++;
            }
            
        }
        
    }

    cout << cnt << endl;
    
     
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

//     int s,t;
//     cin >> s >> t;
//     int cnt=0;

//     for (int i = 0; i <=100; i++)
//     {
//         for (int j = 0; j <=100; j++)
//         {
//             for (int k = 0; k <=100; k++)
//             {
//                 if(i+j+k>s) break;
//                 else if(i+j+k<=s && i*j*k<=t) cnt++;
//             }
//         }
        
//     }

//     cout << cnt << endl;
    
     
//     return 0;
// }



