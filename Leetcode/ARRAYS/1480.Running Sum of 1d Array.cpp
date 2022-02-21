https://leetcode.com/problems/running-sum-of-1d-array/



class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        
        
        for(int i=0;i<nums.size();i++){ //for iterating in array till elements are present
            int sum =0; //initialise sum everytime
            for(int j=0;j<=i;j++){ //normal sum for loop
                sum=sum+nums[j];
                
            }
            ans.push_back(sum);
            
        }
        
        return ans;
        
    }
};
