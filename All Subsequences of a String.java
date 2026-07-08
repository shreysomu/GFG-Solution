class Solution {
    
    static void getAllSubsequences(String s,int i,StringBuilder output,List<String> res){
        
        //base case
        if(i == s.length()){
            String subsequences = output.toString();
            res.add(subsequences);
            return;
        }
        
        //include-Exclude pattern
        char ch = s.charAt(i);
        
        //include
        output.append(ch);
       getAllSubsequences(s,i+1,output,res);
       
       //exclude 
       output.deleteCharAt(output.length() - 1);
       getAllSubsequences(s,i+1,output,res);

    }
    public List<String> powerSet(String s) {
        // Code here
        List<String> res = new ArrayList<>();
        StringBuilder output = new StringBuilder();
        int i = 0;
        getAllSubsequences(s,i,output,res);
        Collections.sort(res);
        return res;
    }
}
