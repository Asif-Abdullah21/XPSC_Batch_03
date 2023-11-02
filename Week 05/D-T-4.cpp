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

bool isValid(int mid,int a[],int n,int c)
{
    int cnt=1;

    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if(a[i]>mid) return false;

        if(sum>mid)
        {
            cnt++;
            sum = a[i];
        }
    }

    if(cnt<=c) return true;
    else return false;

}

int main()
{
    FIO;
    int n,c; 

    while (cin >> n >> c)
    {

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l=0,r=INT_MAX;
        int ans;

        while (l<=r)
        {
            int mid = l+(r-l)/2;

            if(isValid(mid,a,n,c))
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        
        
        cout << ans << endl;
    }
     
    return 0;
}


/*

//Rahat khan pathan vai


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = INT_MAX, ans;
        while (l <= r)
        {
            int cap = l + (r - l) / 2; // mid
            int container = 1;
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > cap)
                {
                    container = INT_MAX;
                    break;
                }
                sum += a[i];
                if (sum > cap)
                {
                    container++;
                    sum = a[i];
                }
            }
            if (container <= m)
            {
                ans = cap;
                r = cap - 1;
            }
            else
            {
                l = cap + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}



*/
