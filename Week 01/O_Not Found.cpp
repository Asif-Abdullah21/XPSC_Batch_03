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
    string s;
    cin >> s;
    
    int cnt[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i]-'a']++;
        
    }

    int f=0;
    char ans;

    for (int i = 0; i < 26; i++)
    {
    //    cout << cnt[i]<< " ";
        if(cnt[i]==0)
        {
            f=1;
            ans = i+'a';
            break;
        }
    }


    if(f) cout << ans << endl;
    else cout << "None\n";
    
    
    
     
    return 0;
}
