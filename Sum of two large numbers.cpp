class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        int l1 = X.size();
       int l2 = Y.size();
        string res;
       int carry = 0;
      
       while(l1 || l2 || carry){
           int n = (l1 == 0) ? 0 : X[l1-1]- '0'; 
           int m = (l2 == 0) ? 0 : Y[l2-1]- '0';
           int total = n+ m+ carry;
           if(l1) 
           l1--;
           if(l2)
           l2--;
           carry = total / 10; 
           total = total % 10;
           res = to_string(total) + res;
           
       }
       int i=0;
       while(i<res.size() && res[i] == '0')
           i++;
       res = res.substr(i);
       return (res != "") ? res : "0";
    }
};
