#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

     const int mod = 1e9 + 7;

    long long int dp[1001][1001];

    long long comb(int m, int n ) {

        if(n > m)
        return 0;

        if(n == 0 or n == m) 
        return 1;

        return dp[m][n] ? dp[m][n] : dp[m][n] = ( comb(m-1, n) % mod + comb(m-1, n-1) % mod ) % mod;

    }
    int knots(int M, int N, int K){
        // code here
        memset( dp, 0, sizeof dp );

        long long int c = comb(M, K);

        long long int d = comb(N, K);

        return (c % mod * d % mod) ;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int M, N, K;
        cin>>M>>N>>K;
        
        Solution ob;
        cout<<ob.knots(M, N, K)<<"\n";
    }
    return 0;
}
