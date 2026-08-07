class Solution {
    
    static void solve(String s , String output ,ArrayList<String> ans){
        //base case
        if(s.isEmpty()){
            ans.add(output);
            return;
        }
        
        
        //try each character in current position
        //rest recursion will take care
        
        for(int i = 0;i<s.length();i++){
            char ch = s.charAt(i);
            String remString = s.substring(0,i) + s.substring(i+1);
            
            solve(remString,output+ch,ans);
        }
    }
    public ArrayList<String> permutation(String s) {
        // code here
        ArrayList<String> ans = new ArrayList<>();
        solve(s,"",ans);
        Collections.sort(ans);
        return ans;
    }
}
