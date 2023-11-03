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

double getDistance(int ax,int ay,int bx,int by)
{
    return sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
}

bool isInside(int ax,int ay,int px,int py,double r)
{
    double d = getDistance(ax,ay,px,py);
    // if(d<=r) return true; eta double er khetre lekha jbe na
    // else return false;

    if((r-d)>1e-15) return true;
    else return false;

   // return (r - d) > 1e-15;
}

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        int px,py; cin >> px >> py; 
        int ax,ay; cin >> ax >> ay;
        int bx,by; cin >> bx >> by;

        double l=0,r=INT_MAX*1.0;

        // a <= b  -> (b-a) > 1e-15
        // a == b -> fabs(a-b) < 1e-15
        double ans;

        while ((r-l)>1e-15) //l<=r eta double er khetre evabe use krte hbe
        {
            double radius = l+(r-l)/2;

            if(isInside(ax,ay,0,0,radius) && isInside(ax,ay,px,py,radius))
            {
                ans = radius;
                r = radius;
            }
            else if(isInside(bx,by,0,0,radius) && isInside(bx,by,px,py,radius))
            {
                ans = radius;
                r = radius;
            }
            else if(isInside(ax,ay,0,0,radius) && isInside(bx,by,px,py,radius) && (2*radius-getDistance(ax,ay,bx,by))>1e-15) //getDistance(ax,ay,bx,by)<=2*radius
            {
                ans = radius;
                r = radius;
            }
            else if(isInside(ax,ay,px,py,radius) && isInside(bx,by,0,0,radius) && (2*radius-getDistance(ax,ay,bx,by))>1e-15) //getDistance(ax,ay,bx,by)<=2*radius
            {
                ans = radius;
                r = radius;
            }
            else l = radius;
        }

        cout << fixed << setprecision(10) << ans << endl;
        
    }
     
    return 0;
}
