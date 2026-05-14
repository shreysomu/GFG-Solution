class Solution {
    public ArrayList<Integer> search(int[] a, int[] b) {
        // code here
        
        
  ArrayList<Integer> result = new ArrayList<>();
        
        int n1 = a.length;
        int n2 = b.length;
        
        // LPS array
        int[] lps = computeLPS(b);
        
        int i = 0; // for a[]
        int j = 0; // for b[]
        
        while(i < n1){
            
            if(a[i] == b[j]){
                i++;
                j++;
            }
            
            // Full match found
            if(j == n2){
                result.add(i - j);
                j = lps[j - 1];
            }
            
            else if(i < n1 && a[i] != b[j]){
                
                if(j != 0){
                    j = lps[j - 1];
                }
                else{
                    i++;
                }
            }
        }
        
        return result;
    }
    
    // Compute LPS array
    private int[] computeLPS(int[] pattern){
        
        int n = pattern.length;
        int[] lps = new int[n];
        
        int len = 0;
        int i = 1;
        
        while(i < n){
            
            if(pattern[i] == pattern[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                
                if(len != 0){
                    len = lps[len - 1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        
        return lps;
        
    }
}
