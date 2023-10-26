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

vector<int> palindrome;

bool isPalindrome(int n)
{
    string s; 
    s = to_string(n);

    for (int i = 0,j=s.size()-1; i < j; i++,j--)
    {
        if(s[i]!=s[j]) return false;
    }
    
    return true;

}

void PreCalculate()
{
    for (int i = 0; i < (1 << 15); i++)
    {
        if(isPalindrome(i)) palindrome.push_back(i);
    }
}

int main()
{
    FIO;

    PreCalculate();

    // for(auto it:palindrome) cout << it << " ";
    // cout << endl;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        ll ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {
                int val = a[i]^palindrome[j];
                if(mp[val])
                {
                    ans += mp[val];
                }
            }
            
        }

        cout << ans/2 << endl;
        
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

// vector<int> palindrome;

// bool isPalindrome(int n)
// {
//     string s; 
//     s = to_string(n);

//     for (int i = 0,j=s.size()-1; i < j; i++,j--)
//     {
//         if(s[i]!=s[j]) return false;
//     }
    
//     return true;

// }

// void PreCalculate()
// {
//     for (int i = 0; i < (1 << 15); i++)
//     {
//         if(isPalindrome(i)) palindrome.push_back(i);
//     }
// }

// int main()
// {
//     FIO;

//     PreCalculate();

//     // for(auto it:palindrome) cout << it << " ";
//     // cout << endl;

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         unordered_map<int,int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mp[a[i]]++;
//         }

//         ll ans = n;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < palindrome.size(); j++)
//             {
//                 int val = a[i]^palindrome[j];
//                 if(mp.find(val)!=mp.end())
//                 {
//                     ans += mp[val];
//                 }
//             }
            
//         }

//         cout << ans/2 << endl;
        
//     }

//     return 0;
// }
