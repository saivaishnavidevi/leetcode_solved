class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        int k = 0; // write index for nums1

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                if(k == 0 || nums1[i] != nums1[k-1]) {
                    nums1[k++] = nums1[i]; // overwrite in-place
                }
                i++; j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        nums1.resize(k); // shrink to intersection size
        return nums1;
    }
};
