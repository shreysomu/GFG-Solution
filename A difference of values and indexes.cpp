//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
         int res1=INT_MIN;
        int Min = INT_MAX;
        for(int i=n-1;i>=0;i--){
            Min = min(Min,arr[i]-i);
            int temp1 = arr[i]-i-Min;
            res1 = max(res1,temp1);
        }
        int res2 = INT_MIN;
        int Max = INT_MIN;
        for(int i=n-1;i>=0;i--){
             Max = max(Max,arr[i]+i);
            int temp2 = Max - arr[i]-i;
            res2 = max(res2,temp2);
            
        }
        res1 = max(res1,res2);
        return res1;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends
