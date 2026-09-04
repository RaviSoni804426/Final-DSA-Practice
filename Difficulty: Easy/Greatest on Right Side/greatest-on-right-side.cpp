class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int n=arr.size();
        int maxFromRight=-1;
        for(int i=n-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=maxFromRight;
            maxFromRight= max(maxFromRight,temp);
        }
        return arr;
    }
};
