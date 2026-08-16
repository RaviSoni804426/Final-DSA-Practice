class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n= arr.size();
        if(n<=1) return;
        for(int i=0;i<n-1;i++){
            int temp=arr[i]; //swap(arr[i])
            arr[i]= arr[n-1];
            arr[n-1]=temp;
        }
    
    }
};