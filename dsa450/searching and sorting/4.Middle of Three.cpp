https://practice.geeksforgeeks.org/problems/middle-of-three2926/1


class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A>B){
            swap(A,B);
        }
        if(B>C){
            swap(B,C);
        }
        if(A>B){
            swap(A,B);
        }
        
        return B;
    }
};
