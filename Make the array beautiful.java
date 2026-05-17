class Solution {
    List<Integer> makeBeautiful(int[] arr) {
        // code here
        Stack<Integer> st = new Stack<>();
        for(int i:arr){
           if(!st.isEmpty()){
               int j = st.peek();
               if((j>=0 && i<0) || (j<0 && i>=0)){
                   st.pop();
                   continue;
               }
           }
           st.push(i);
       }
        return new ArrayList<>(st);
    }
}
