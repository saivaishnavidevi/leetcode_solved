class Solution {
public:
     bool isValid(vector<int> arr, int n, int m, int max_pages){
            int stu=1,pages=0;
            for(int i=0;i<n;i++){
                if(arr[i]>max_pages){
                    return false;
                }
                if(pages+arr[i]<=max_pages){
                    pages+=arr[i];
                }else{
                    stu++;
                    pages=arr[i];
                }
            }
            return stu > m ? false : true;
        }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            return -1;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int st=0,end=sum;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums,n,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};