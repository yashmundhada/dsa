https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1/



class Solution{
public:
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	
	int first(int arr[],int n,int x){
	    int s = 0;
	    int e = n-1;
	    int mid = s+(e-s)/2;
	    int ans = n;
	    while(s<=e){
	        if(arr[mid]==x){
	            ans = mid;
	            e = mid-1;
	        }
	        else if(arr[mid]>x){
	            e = mid-1;
	        }
	        else{
	            s = mid+1;
	        }
	        mid = s + (e - s) / 2;
	    }
	    return ans;
	}
	
	int last(int arr[],int n,int x){
	    int s = 0;
	    int e = n-1;
	    int mid = s+(e-s)/2;
	    int ans = n;
	    while(s<=e){
	        if(arr[mid]==x){
	            ans = mid;
	            s = mid+1;
	        }
	        else if(arr[mid]>x){
	            e = mid-1;
	        }
	        else{
	            s = mid+1;
	        }
	        mid = s + (e - s) / 2;
	    }
	    return ans;
	}
		
	int count(int arr[], int n, int x) {
	    // code here
	    int a = first(arr,n,x);
	    if(a == n) return 0;
	    int b = last(arr,n,x);
	    
	   
	    
	    
	    
	    return b-a+1;
	    
	}
};
