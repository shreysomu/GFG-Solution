class Solution {
    public boolean canSeatAllPeople(int k, int[] seats) {
        // code here
        int n = seats.length;
        if (!goodSeating(n, seats)) return false;
        
        for (int i=0; i<n; i++) {
            
            if (seats[i] == 0) {
                boolean left  = (i == 0 || seats[i -1] == 0);
                boolean right = (i == n -1 || seats[i +1] == 0);
                
                if (left && right) {
                    seats[i] = 1;
                    
                    k--;
                    if (k == 0) return true;
                }
                
            }
        }
        return k <= 0;
    }
    
    private boolean goodSeating(int n, int[] seats) {
        for (int i=1; i<n; i++) {
            if (seats[i -1] == 1 && seats[i] == 1) return false;
        }
        return true;
        
    }
}
