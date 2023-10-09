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
    int n; cin >> n;
    n++;

    while (true)
    {
        string s = to_string(n);
        set<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }

        if(st.size()==4){
            cout << n << endl;
            break;
        }
        else n++;
        
        

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
//     int n;
//     cin >> n;

//     for (int i = n+1; i < 11000; i++)
//     {
//         int temp=i;
//         int cnt[10]={0};

//         while (temp>0)
//         {
//             int rem = temp%10;
//             cnt[rem]++;
//             temp /=10;
//         }

//         int f=1;
//         for (int j = 0; j < 10; j++)
//         {
//             if(cnt[j]>1){
//                 f=0;
//                 break;
//             }
//         }
        
//         if(f){
//             cout << i << endl;
//             break;
//         }
        
//     }
    
     
//     return 0;
// }
