https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#


class Solution{
public:	
	
	
	int isPalindrome(string arr)
	{
	    // Your code goes here
	    int start = 0;
	    int end = arr.length() -1;
	    
	    while(start<=end){
	        if(arr[start]==arr[end]){
	            start++;
	            end--;
	            
	        }
	        else{
	            return 0;
	        }
	    }
	    return 1;
	    
	}

};

