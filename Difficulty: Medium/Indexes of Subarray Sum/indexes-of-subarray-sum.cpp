class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int s = 0, e = 0;
        long long currentSum = 0;

        while (e < n) {
            currentSum += arr[e];

            while (currentSum > target && s <= e) {
                currentSum -= arr[s];
                s++;
            }

            if (currentSum == target) {
                return {s + 1, e + 1}; // 1-based indexing
            }

            e++;
        }

        return {-1};
    }
};