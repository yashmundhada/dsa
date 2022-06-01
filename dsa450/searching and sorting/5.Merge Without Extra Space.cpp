https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1



class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int leftIndex = n-1;
	    int rightIndex = 0;
	    
	    while(leftIndex>=0 && rightIndex<m){
	        if(arr1[leftIndex]>arr2[rightIndex]){
	            swap(arr1[leftIndex],arr2[rightIndex]);
	            
	        }
	        leftIndex--;
	        rightIndex++;
	    }
	    
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};
