class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int a[], int n) {
        // code here
       unordered_map<int, int>mp;
        for(int i=0; i<n;i++)
            mp[a[i]]++;
        for(int j=0; j<n; j++){
            if(mp[a[j]]>1)
            return j+1;
        }
        return -1;
    }
};
