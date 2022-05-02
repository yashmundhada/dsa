https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0


Time complexity - O()
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int total = r*c;
        int count = 0;
        vector<int> ans;
        
        int startrow = 0;
        int endrow = r-1;
        int startcol= 0;
        int endcol = c-1;
        
        while(count<total){
            for(int i = startcol;count<total && i<=endcol;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            
            for(int i = startrow;count<total && i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            
            for(int i = endcol;count<total && i>=startcol;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            
            for(int i = endrow;count<total && i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
            
        }
        return ans;
    }
};
