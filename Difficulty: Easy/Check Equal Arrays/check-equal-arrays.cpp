class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        if(n!=m){
            return false;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
            return false;
        }
    }
        return true;
    }
};