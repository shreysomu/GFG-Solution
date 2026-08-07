class Solution {
    public int countFriendsPairings(int n) {
        // code here
        double mod=1e9+7;
        long  P1 = 2;
        long  P2 = 1;
        if(n == 0)
         return 0;
        else if(n == 1) 
        return 1;
        else if(n == 2)
        return 2;
        for(int i = 3; i<=n; i++){
            long  P = P1 + (i-1)*P2;
            P %= mod;
            P2 = P1;
            P1 = P;
        }
        return (int)P1;
    }
}
