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

bool is_prime(int j)
{
    if(j<2) return false;
   
    for (int i = 2; i*i <= j; i++)
    {
        if(j%i==0) return false;
    }

    return true;
    
}


int main()
{
    FIO;

    ll seive[4000] = {0};
     // memset(seive,0,sizeof(seive));
 
     for(int i=2;i<=4000;i++)
     {
        if(seive[i]==0)
        {
            for(int j=i+i;j<=4000;j+=i)
            {
                seive[j]=1;
            }
        }
     }


    int n;
    cin >> n;

    int ans =0;
    for (int i = 1; i <= n; i++)
    {
        int cnt=0;
        for (int j = 2; j <= i/2; j++)
        {     
            if(i%j==0 && seive[j]==0){
                cnt++;
              //  cout <<i << " " <<j << " " << is_prime(j) << endl;
            }
        }

        if(cnt==2) ans++;
        
    }

    cout << ans << endl;
    
     
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

// bool is_prime(int j)
// {
//     if(j<2) return false;
   
//     for (int i = 2; i*i <= j; i++)
//     {
//         if(j%i==0) return false;
//     }

//     return true;
    
// }

// int main()
// {
//     FIO;
//     int n;
//     cin >> n;

//     int ans =0;
//     for (int i = 1; i <= n; i++)
//     {
//         int cnt=0;
//         for (int j = 2; j <= i/2; j++)
//         {     
//             if(i%j==0 && is_prime(j)){
//                 cnt++;
//               //  cout <<i << " " <<j << " " << is_prime(j) << endl;
//             }
//         }

//         if(cnt==2) ans++;
        
//     }

//     cout << ans << endl;
    
     
//     return 0;
// }


