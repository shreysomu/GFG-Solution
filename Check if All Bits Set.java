class Solution {
    public boolean isBitSet(int n) {
        // code here
         if(n == 0) {
            return false;
        }
        
        while(n > 0) {
            if( (n&1) == 0) {
                return false;
            }
            
            n >>= 1;
        }
        
        return true;
    }
};
