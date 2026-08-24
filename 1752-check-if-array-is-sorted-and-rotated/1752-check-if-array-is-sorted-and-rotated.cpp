class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr = nums;
        std::sort(nums.begin(),nums.end());
        int x=0,i=0,count=0;
        while(i<nums.size() && x<nums.size()){
            if(arr[i]==nums[(i+x)%nums.size()]){
                count++;
                i++;
            }else{
                i=0;
                x++;
                count=0;
            }
        }
        if(count==nums.size()){
            return true;
        }
        return false;
    }
};