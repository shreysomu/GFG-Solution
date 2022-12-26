//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
         reverse(s.begin(), s.end());
        int j=0;
        for(int i=0; i<=s.size(); i++){
           if(s[i] == '.' || i == (s.size())){
               reverse(s.begin()+j, s.begin()+i);
               j = i+1;
            }
       }
       return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
