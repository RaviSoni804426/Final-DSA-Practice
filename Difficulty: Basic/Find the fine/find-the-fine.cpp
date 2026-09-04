class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int sum=0;
        int n=car.size();
    for (int i = 0; i < n; i++) {
                 // Case 1: Date is even, so we look for odd car numbers
                 if (date % 2 == 0) {
                     if (car[i] % 2 != 0) {
                         sum += fine[i];
                     }
                 } 
                 // Case 2: Date is odd, so we look for even car numbers
                 else {
                     if (car[i] % 2 == 0) {
                         sum += fine[i];
                     }
                 }
             }

             return sum;
         
     }
};