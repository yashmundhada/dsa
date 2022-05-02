
https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0



class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long max_so_far = INT_MIN;
        long long max_end_here = 0;
        
        for(int i = 0; i<n ; i++){
            
            //include current element
            max_end_here = max_end_here + arr[i];
            
            //update the ans;
            max_so_far = max(max_so_far,max_end_here);
            
            //if max_end_here is 0 then dont include
            if(max_end_here<0){
                max_end_here = 0;
            }
        }
        return max_so_far;
        
    }
};
