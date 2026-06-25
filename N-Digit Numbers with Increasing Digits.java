class Solution {
    public static ArrayList<Integer> increasingNumbers(int n) {
        // code here
       
        ArrayList<Integer> res = new ArrayList<>();
        if (n > 9) return res;
        
        solve(n, new StringBuilder(), res);
        return res;
    }
    
    private static void solve( int n, StringBuilder sb, ArrayList<Integer> res ) {
       
        if (sb.length() == n) {
            int num = Integer.parseInt(sb.toString());
            res.add(num);
            return;
        }
        
        for (char i='0'; i<='9'; i++) {
            int len = sb.length();
            
            if ((n > 1 && len == 0 && i == '0') ||  (len > 0 && sb.charAt(len -1) >= i)) {
                continue;
            }
            sb.append(i);
            solve(n, sb, res);
            sb.deleteCharAt(len);
        }
    }
}
