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