#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
void merge(vector<pair<int,int>> &v,vector<int> &res,int left,int mid,int right)
{
        int i=left,j=mid+1,k=0;
        vector<pair<int,int>> temp(right-left+1);
        // sorting in descending order
        while(i<=mid && j<=right)
        {
            if(v[i].first>v[j].first)
            {
                res[v[i].second]+=(right-j+1);
                temp[k++]=v[i++];
            }
            else
                temp[k++]=v[j++];
        }
        while(i<=mid)
            temp[k++]=v[i++];
        while(j<=right)
            temp[k++]=v[j++];
        k=0;
        for(i=left;i<=right;i++)
            v[i]=temp[k++];
    }
    void mergeSort(vector<pair<int,int>> &v,vector<int> &res,int left,int right)
    {
        if(left<right)
        {
            int mid=left+(right-left)/2;
            mergeSort(v,res,left,mid);
            mergeSort(v,res,mid+1,right);
            merge(v,res,left,mid,right);
        }
    }
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int> ans(n,0);
	    vector<pair<int,int>> v;
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({arr[i],i});
	    }
	    mergeSort(v,ans,0,n-1);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
