https://practice.geeksforgeeks.org/problems/count-squares3649/1


brute force - 

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count = 0;
        for(int i = 1;i<=N/2;i++){
            if((i*i) < N){
                count++;
            }
            else if((i*i)>N){
                break;
            }
        }
        return count;
    }
};
