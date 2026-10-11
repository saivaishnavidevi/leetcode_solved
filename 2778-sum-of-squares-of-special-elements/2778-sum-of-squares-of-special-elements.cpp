class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0, n=nums.size();
        for(int i=1;i<=nums.size();i++){
            if(n%i==0){
                int val=nums[i-1];
                sum+=pow(val,2);
            }
        }
        return sum;
    }
};