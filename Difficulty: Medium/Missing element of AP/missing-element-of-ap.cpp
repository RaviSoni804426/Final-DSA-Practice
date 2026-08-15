class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int diff;
        int n= arr.size();
        int d=(arr[1]-arr[0]);
        for(int i=1;i<n-1;i++){
            diff= arr[i+1]-arr[i];
        
        if (abs(diff)<abs(d)){
            d=diff;
        }
        }
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i])!=d){
                return arr[i]+d;
            }
        }
        return arr[n-1]+d;
    }
};