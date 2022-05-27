
https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#

vector<int> find(int arr[], int n , int x )


{
    // code here
    vector<int> ans;
    int s = 0;
    int e = n -1;
    int mid = s+(e-s)/2;
    int focc = -1;
    int locc = -1;
    while(s<=e){
        if(arr[mid]==x){
            focc = mid;
            e = mid-1;
        }
        else if(arr[mid]>x){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    
    s=0;
    e = n-1;
    mid = s+(e-s)/2;
    
    while(s<=e){
        if(arr[mid]==x){
            locc = mid;
            s = mid+1;
        }
        else if(arr[mid]>x){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    
    ans.push_back(focc);
    ans.push_back(locc);
    
    return ans;
    
}
