https://leetcode.com/problems/search-a-2d-matrix/

//brute force

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};


binary search


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end = row*col-1;
        
        int mid = start+(end-start)/2;
        
        while(start<=end){
            int element = matrix[mid/col][mid%col]; //important
            
            if(element==target){
                return true;
            }
            else if(element<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        
        return false;
    }
};
