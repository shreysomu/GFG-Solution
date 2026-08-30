class Solution {
	public void quickSort(int[] arr, int low, int high) {
		// code here
		if (low >= high)
			return;
		
		// Partitioning
		int pivotIndex = partition(arr, low, high);
		
		// sort left part with the help of recursion
		quickSort(arr, low, pivotIndex - 1);
		
		// sort right part with the help of recursion
		quickSort(arr, pivotIndex + 1, high);
	}
	
	private int partition(int[] arr, int low, int high) {
		// code here
		// choose pivot index --- >>starting,ending,mid,random element
		
		int pivotElement = arr[low];
		
		// put this pivot element on it's correct position
		// count based approach,lomuto,hoare
		
		// count based approach
		int count = 0;
		for (int i = low + 1; i <= high; i++) {
			if (arr[i] <= pivotElement) {
				count++;
			}
		}
		
		// place pivot element at it's correct position
		int correctPosition = low + count;
		// swap pivot element with element that is present at it's correct position
		
		int temp = arr[correctPosition];
		arr[correctPosition] = arr[low];
		arr[low] = temp;
		
		int i = low;
		int j = high;
		
		while (i<correctPosition && j>correctPosition) {
			// check left part
			while (arr[i] <= pivotElement) {
				i++;
			}
			
			// check right part
			
			while (arr[j] > pivotElement) {
				j--;
			}
			
			// standing where need to swap arr[i] & arr[j]
			if (i<correctPosition && j>correctPosition) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
			}
		}
		return correctPosition;
	}
}
