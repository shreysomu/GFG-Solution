class Solution {
    
    
    public static int merge(int[] arr, int l, int r, int mid){
            int leftArrLen = mid - l+1;
            int rightArrLen = r - mid;
            int inversionCount = 0;


            int[] leftArr = new int[leftArrLen];
            int[] rightArr = new int[rightArrLen];

            //copy the left haf content of arr into leftArr
            int k = l;
            for (int i = 0; i < leftArrLen; i++) {
                leftArr[i] = arr[k];
                k++;
            }

            //copy the right half of arr content into rightArr
            k = mid + 1;
            for (int j = 0; j < rightArrLen; j++) {
                rightArr[j] = arr[k];
                k++;
            }

            //merge exact logic
            int i = 0;
            int j = 0;
            k = l;
            while (i<leftArrLen && j<rightArrLen){
                if(leftArr[i] <= rightArr[j]){
                    arr[k] = leftArr[i];
                    i++;
                    k++;
                }
                else {
                    arr[k] = rightArr[j];
                    j++;
                    k++;

                    inversionCount += (leftArrLen-i);
                }
            }

            //if left array fully consumed and right not
            //then copy rem elements of right array into ans array
            while (j < rightArrLen){
                arr[k] = rightArr[j];
                j++;
                k++;
            }


            //if right array fully consumed and left not
            //then copy rem elements of left array into ans array
            while (i < leftArrLen){
                arr[k] = leftArr[i];
                i++;
                k++;
            }
            return inversionCount;
        }

    static int mergeSort(int[] arr , int s, int e){

        //base case
        if(s>e)
            return 0;

        if(s==e)
            return 0;
        //Break in 2 part
        int mid = (s+e)/2;

        //Sort Left Array
        int leftInversions = mergeSort(arr,s,mid);

        //sort right side

       int rightInversions =  mergeSort(arr,mid+1,e);

        //merge both sorted array
        int intermediateInversions =  merge(arr,s,e,mid);

        return leftInversions + rightInversions + intermediateInversions;
    }
    public int inversionCount(int arr[]) {
        // code here
        
        ////Brute force approach ---- >> O(n^2) ---- >>TLE

        // int count = 0;
        // for(int i = 0 ;i<arr.length;i++){
        //     for(int j = i+1;j< arr.length;j++){
        //         if(i<j && arr[i] > arr[j]){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        
        
        //optimized approach using Merge Sort
        
        int s= 0;
        int e = arr.length-1;

        return mergeSort(arr,s,e);
    }
}
