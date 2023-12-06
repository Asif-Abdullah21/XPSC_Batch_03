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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int freq[105]={0};

        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        vector<int> v;

        for (int i = 0; i < 105; i++)
        {
            if(freq[i]>1){
                v.push_back(i);
            }
        }
        vector<int> ans;

        if(v.size()<2) cout<< -1;
        else{
            for (int i = 0; i < n; i++)
            {
                if(a[i]==v[0])
                {
                    ans.push_back(2);
                    v[0] = -1;
                }
                else if(a[i]==v[1])
                {
                    ans.push_back(3);
                    v[1] = -1;
                }
                else ans.push_back(1);
            }
            
        }

        for(auto it: ans) cout << it << " ";
        cout << endl;
        
        
         
    }
     
    return 0;
}
