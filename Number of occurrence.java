class Solution {
    
    static int getUpperBound(int[] arr, int target){
        int n = arr.length;
        int s = 0;
        int e = n-1;
        int ans = n;
        while(s<=e){
            int mid = s+(e-s)/2;

            if (arr[mid] <= target){
                s = mid+1;
            }
            else {
                ans = mid;
                e = mid-1;
            }
        }
        return ans;
    }
    
    static int getLowerBound(int[] arr, int target){
        int n = arr.length;
        int s = 0;
        int e = n-1;
        int ans = n;
        while(s<=e){
            int mid = s+(e-s)/2;

            if (arr[mid] >= target){
                ans = mid;
                e = mid-1;
            }
            else {
                s = mid +1;
            }
        }
        return ans;
    }
    
    int countFreq(int[] arr, int target) {
        // code here
        int lowerBoundIndex = getLowerBound(arr,target);
        int upperBoundIndex = getUpperBound(arr,target);
        int res = upperBoundIndex - lowerBoundIndex;
        
        return res;
    }
}
