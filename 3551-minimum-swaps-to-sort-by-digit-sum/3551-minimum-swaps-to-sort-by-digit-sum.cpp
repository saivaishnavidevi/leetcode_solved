
class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> sortedNums = nums;

        // Sort by digit sum, then by actual value
        sort(sortedNums.begin(), sortedNums.end(),
             [&](int a, int b) {
                 int sumA = digitSum(a);
                 int sumB = digitSum(b);

                 if (sumA == sumB)
                     return a < b;

                 return sumA < sumB;
             });

        // Map each number to its correct sorted index
        unordered_map<int, int> targetIndex;
        for (int i = 0; i < n; i++) {
            targetIndex[sortedNums[i]] = i;
        }

        // Count cycles
        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || targetIndex[nums[i]] == i)
                continue;

            int j = i;
            int cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = targetIndex[nums[j]];
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

        return swaps;
    }
};