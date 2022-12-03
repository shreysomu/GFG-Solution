//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
        bool isPossible(int cows,int distance,vector<int>&stalls){

        int Cnt=1;

        int n=stalls.size();

        int i=0,j=1;

        while(j<n){

             int cowDis=stalls[j]-stalls[i];

             if(cowDis>=distance){

                 Cnt++;

                 if(Cnt==cows)return true;

                 i=j;

                 j++;

             }

             else{

                 j++;

             }

        }

        return false;

    }

 
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
         sort(stalls.begin(),stalls.end());

        int l=1, h=stalls[n-1]-stalls[0];

        int res=0;

        while(l<=h){

            int m=l+(h-l)/2;

            if(isPossible(k,m,stalls)){

                res=m;

                l=m+1;

            }

            else{

                h=m-1;

            }

        }

        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
