class Solution {
public:
    int findLucky(vector<int>& arr) {
        std:: sort(arr.begin(),arr.end());
        int maxim=-1;
        int i=0;
        while(i < arr.size()){
            int count=1;
           int j = i + 1;
            while(j < arr.size() && arr[i] == arr[j]){
                count++;
                j++;
            }
            if(count == arr[i]){
                maxim = std::max(maxim, arr[i]);
            }
            i = j;
        }
        return maxim;
    }
};