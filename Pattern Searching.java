class Solution {
    int search(String text, String pat) {
        // code here
         if(pat.length()>text.length())
            return 0;
        
        if(text.contains(pat))
            return 1;
        
        return 0;
    }
};
