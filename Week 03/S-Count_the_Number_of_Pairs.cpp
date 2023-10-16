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
        int n,k; cin >> n >> k;

        int freqS[26] = {0};
        int freqC[26] = {0};

        string s; cin >> s;

        for (int i = 0; i < n; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                freqS[s[i]-'a']++;
            }
            else freqC[s[i]-'A']++;
        }

        int cnt=0;

        for (int i = 0; i < 26; i++)
        {
            //cout << i << " " << freqS[i] << " " << freqC[i] << endl;
            if(freqS[i]>0 && freqC[i]>0) 
            {
                int mn = min(freqS[i],freqC[i]);
                cnt+= mn;
                freqS[i]-= mn;
                freqC[i]-= mn;
            }
        }

        // for (int i = 0; i < 26; i++)
        // {
        //    cout << i << " " << freqS[i] << " " << freqC[i] << endl;
           
        // }

        int more=0;

        for (int i = 0; i < 26; i++)
        {
            
            if(freqS[i]>1) 
            {
                more+= (freqS[i]/2);
            }
            if(freqC[i]>1)
            {
                more+= (freqC[i]/2);
            }
        }

        if(more>=k) cnt += k;
        else cnt += more;

        cout << cnt << endl;
        
        
    }
     
    return 0;
}
