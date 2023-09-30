//problem 1: Max Sum Subarray of size K


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int n){
        long sum = 0,mx=INT_MIN;
        int i=0,j=0;
        while(j<n)
        {
            sum += Arr[j];
            if(j>=k-1)
            {
                mx = max(mx,sum);
                sum -= Arr[i];
                i++;
            }
            j++;
        }
        
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends



//----------------------------------------------------


//problem 02: First negative integer in every window of size k


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) 
{
    long long int i=0,j=0;
    
    queue<long long> q;
    vector<long long> v;
    
    while(j<N)
    {
        if(A[j]<0) q.push(A[j]);
        if(j>=K-1)
        {
            if(q.size())//if(!q.empty())
            {
                v.push_back(q.front());
            }
            else v.push_back(0);
            
            if(A[i]<0) q.pop();// if(A[i]<0 && !q.empty()) q.pop();
            
            i++;
        }
        j++;
    }
    
    return v;
}