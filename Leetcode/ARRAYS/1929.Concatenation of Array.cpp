https://leetcode.com/problems/concatenation-of-array/


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        for(int i =0;i<n;i++){
            ans.push_back(nums[i]);
        }
        
        for(int i =0;i<n;i++){
            ans.push_back(nums[i]);
        }
        
        return ans;
        
        
        
        
        
    }
};



APPROCH 2 without using extra space


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
