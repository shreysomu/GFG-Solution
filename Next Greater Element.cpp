class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
               stack<long long> St;
              St.push(-1);
        vector<long long> res(n);
        for(int i = n-1; i>= 0; i--) {
            long long curr = arr[i];
            while(St.top() != -1 && St.top() <= curr) {
                St.pop();
            }
            res[i] = St.top();
            St.push(curr);
        }
        return res;
    }
};
