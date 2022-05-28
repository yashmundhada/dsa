


https://leetcode.com/problems/search-in-rotated-sorted-array/


class Solution {
public:
    
    int Pivot(vector<int>& arr){
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e-s)/2;
        
        while(s<e){
            if(arr[mid]>=arr[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
    
    
    int binary(vector<int>& arr, int target,int start,int end){
        int s = start;
        int e = end;
        int mid = s + (e-s)/2;
        
        while(s<=e){
            if(arr[mid]==target){
                return mid;
            }
            else if(target<arr[mid]){
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
    
    int search(vector<int>& arr, int target) {
        int end = arr.size() - 1;
        int pivot = Pivot(arr);
        if(target>=arr[pivot] && target<=arr[end]){
        return binary(arr,target,pivot,end);
        }   
        else{
            return binary(arr,target,0,pivot-1);
        }
        
        
    }
};
