class Solution {
public:
    string triangleType(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int a=nums[0]+nums[1];
        int b=nums[0]+nums[2];
        int c=nums[1]+nums[2];
        if(a>nums[2] && b>nums[1] && c>nums[0]){
        if(nums[0]==nums[1] && nums[1]==nums[2]){
            return "equilateral";
            }
        else if(nums[0]==nums[1] || nums[1]==nums[2]){
            return "isosceles";
        }
        else{
            return "scalene";
        }
    }
        return "none";
    }
};