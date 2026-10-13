class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        for (int x : nums) {
            squares.push_back(1LL * x * x);
        }

        sort(squares.begin(), squares.end());

        int n = squares.size();
        long long score = 0;

        for (int i = 0; i < n / 2; i++) {
            score += squares[n - 1 - i];
            score -= squares[i];
        }

        if (n % 2 == 1) {
            score += squares[n / 2];
        }

        return score;
    }
};