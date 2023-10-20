/*

// Problem 1: Longest Subarray With Sum K

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0,j=0;

    long long sum =0;
    int mx = -1;

    while(j<a.size())
    {
        sum += a[j];
        while(sum>k)
        {
            sum -= a[i];
            i++;
        }

        if(sum==k) mx = max(mx,j-i+1);

        j++;
    }

    return mx;

}

*/


//--------------------------------------------------------------------


/*

// Problem 2: Longest Sub-Array with Sum K

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        long long sum =0;
        int mx = 0;
        
        map<long long,int> mp;
        
        for(int i=0;i<N;i++)
        {
            sum += A[i];
            
            if(sum==K) mx = max(i+1,mx);
            
            if(mp.find(sum)==mp.end()) mp[sum] = i;
            
            if(mp.find(sum-K)!=mp.end())
            {
                mx = max(i-mp[sum-K],mx);
            }
            
        
        }
        
        return mx;
    } 

};

*/

//another same:

/* 
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int j=0;
        int i=0;
        map<int,int> mp;
        
        long long sum =0;
        int ans=0;
        
        while(j<n)
        {
            sum += a[j];
            if(mp.find(sum)==mp.end())
            {
                mp[sum] = j;
            }
            
            if(sum==k)
            {
                ans = max(ans,j+1);
            }
            else if(mp.find(sum-k)!=mp.end())
            {
                int i = mp[sum-k];
                ans = max(ans,j-i);
            }
            j++;
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends

*/

//------------------------------------------------------------------------


/*

// Problem 3: Longest K unique characters substring

//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int mx = -1;
        int freq[26] = {0};
        
        int i=0,j=0,unique=0;
        
        while(j<s.size())
        {
            freq[s[j]-'a']++;
            if(freq[s[j]-'a']==1) unique++;
            
            while(unique>k)
            {
                freq[s[i]-'a']--;
                if(freq[s[i]-'a']==0) unique--;
                i++;
            }
            
            if(unique==k) mx = max(mx,j-i+1);
            
            j++;
        }
        
        return mx;
    }
};

*/

/*

//problem 04: Longest Distinct characters in string

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



int longestSubstrDistinctChars (string s)
{
        int mx = -1;
        int freq[26] = {0};
        
        int i=0,j=0,unique=0;
        
        while(j<s.size())
        {
            freq[s[j]-'a']++;
            if(freq[s[j]-'a']==1) unique++;
            
            while(freq[s[j]-'a']>1)
            {
                freq[s[i]-'a']--;
                if(freq[s[i]-'a']==0) unique--;
                i++;
            }
            
            cout << unique << " ";
            
            mx = max(mx,unique);
            
            j++;
    }
    
    return mx;
}


*/


/*

//3rd problem in way of pathan vai:

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    
    int ans =0;
    int i=0,j=0;
    int freq[26] = {0};
    int n = s.size();
    
    while(j<n)
    {
        if(freq[s[j]-'a']==1)
        {
            while(true)
            {
                freq[s[i]-'a']=0;
                i++;
                if(s[i-1]==s[j]) break;
            }
        }
        freq[s[j]-'a'] = 1;
        
        ans = max(ans,j-i+1);
        j++;
    }
    
    return ans;


*/
