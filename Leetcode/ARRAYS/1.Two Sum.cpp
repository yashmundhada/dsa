https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]+arr[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
        
    }
};
