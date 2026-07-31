 //Solving using Recursion ....mauybe will get TLE --->> we can optimize usi9ng DP

class Solution {
    //Solving using Recursion ....mauybe will get TLE --->> we can optimize usi9ng DP
    static boolean solve(int[] arr , int k, int sum, int index){
        //base case
        
        if(index >= arr.length){
            if(sum == k)
            return true;
            else
            return false;
        }
        
        //One case will do otehr recursion will handle
        //include-exclude pattern]
        
        //include
        boolean includeAns = solve(arr,k,sum+arr[index],index+1);
        //exclude
        boolean excludeAns = solve(arr,k,sum,index+1);
        
        boolean finalAns = includeAns || excludeAns;
        return finalAns;
    }
    public boolean checkSubsequenceSum(int[] arr, int k) {
        // code here
        int index = 0;
        int sum = 0;
        
        boolean res = solve(arr,k,sum,index);
        return res;
    }
}
