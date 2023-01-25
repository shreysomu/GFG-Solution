class Solution {
  public:
    int minOperation(string s) {
        // code here
   
  int n = s.length();
   int res = 0;
        for (int i = 0; i < n / 2; i++)
            if (s.substr(0, i + 1) == s.substr(i + 1, i + 1))
                res = i;
        return n - res;
    }
};
