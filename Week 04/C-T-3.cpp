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

int countSetBit(int n)
{
    int cnt=0;
    while(n)
    {
        cnt += (n&1);
        n>>=1;
    }
    return cnt;
}

int main()
{
    FIO;
    int n,m,k; cin >> n >> m >>k;

    int a[m+1];
    for (int i = 0; i < m+1; i++)
    {
        cin >> a[i];
    }

    int me = a[m];
    int ans =0;

    for (int i = 0; i < m; i++)
    {
        if(countSetBit(a[i]^me)<=k) ans++; 
    }

    cout << ans << endl;
    
    
     
    return 0;
}


//----------------------------------------------------


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
//     int n,m,k; cin >> n >> m >>k;

//     int a[m+1];
//     for (int i = 0; i < m+1; i++)
//     {
//         cin >> a[i];
//     }

//     int me = a[m];
//     int ans =0;

//     for (int i = 0; i < m; i++)
//     {
//         if(__builtin_popcount(a[i]^me)<=k) ans++;
//     }

//     cout << ans << endl;
    
    
     
//     return 0;
// }


//---------------------



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
//     int n,m,k; cin >> n >> m >>k;

//     int a[m+1];
//     for (int i = 0; i < m+1; i++)
//     {
//         cin >> a[i];
//     }

//     int me = a[m];
//     int cnt=0;
//     int ans =0;

//     for (int i = 0; i < m; i++)
//     {
//         cnt=0;
//         for (int j = 0; j < 22; j++)
//         {
//             int mask = 1<<j;

//             if((mask&a[i])==0 && (mask&me)!=0) cnt++;
//             else if((mask&a[i])!=0 && (mask&me)==0) cnt++;
//         }

//         if(cnt<=k) ans++;
        
//     }

//     cout << ans << endl;
    
    
     
//     return 0;
// }
