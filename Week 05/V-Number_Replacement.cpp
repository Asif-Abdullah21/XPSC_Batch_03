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

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int a[n];
        int freq[100];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
          
        }

        string s; cin >> s;

        for (int i = 0; i < n; i++)
        {
            freq[a[i]] = s[i]-'a';
        }

        int f=1;


        for (int i = 0; i < s.size(); i++)
        {
            //cout << s[i]-'a'<< " "<< freq[a[i]]<< endl;
            if(s[i]-'a'!= freq[a[i]])
            {
                f=0;
                break;
            }
        }

        if(f) yy;
        else nn;
        
        
        
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
    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string s; cin >> s;
                
        map<int,char> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[a[i]] = s[i];
        }

        int f=1;

        for (int i = 0; i < s.size(); i++)
        {
            char temp = mp[a[i]];

            if(temp!=s[i]) 
            {
                f=0;
                break;
            }
        }

        if(f) yy;
        else nn;
        
        
    }
     
    return 0;
}




*/