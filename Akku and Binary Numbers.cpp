//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
     vector<long long>ans;
    void precompute()
    {
        // Code Here
        for(int i = 0;i<64;i++){
            for(int j = i+1;j<64;j++){
                for(int k = j+1;k<64;k++){
                        long long n = (1LL<<i)|(1LL<<j)|(1LL<<k);
                         ans.push_back(n);
                }
            }
        }
        sort(ans.begin(),ans.end());
    }
    
    long long solve(long long l, long long r){
        // Code Here
        int L = lower_bound(ans.begin(),ans.end(),l)-ans.begin();
        int R = upper_bound(ans.begin(),ans.end(),r)-ans.begin();
           return R-L;
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends
