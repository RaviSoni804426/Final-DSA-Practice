class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int n= arr.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                // int temp=arr[i];
                // arr[a]=arr[i];
                // arr[i]=1;
                a++;}
        }
            for(int i=0;i<n;i++){
                    if(i<a){
                        arr[i]=0;}
                        else{
                            arr[i]=1;
                        }
               
             
            
        }
        
    }
};

