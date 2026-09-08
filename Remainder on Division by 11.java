class Solution {
    static int remainder(String x) {
        // code here
        int rem = 0;
        
        for(int i = 0 ;i<x.length();i++){
            rem=(rem * 10 +(x.charAt(i) - '0')) % 11;
        }
        
        return rem;
    }
}
