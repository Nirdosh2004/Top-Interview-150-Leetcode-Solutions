class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Remove the extra elements from the end of nums1
        for(int i = nums1.size() - 1; i >= m; i--) {
            nums1.pop_back();
        }

        // Append elements from nums2 to nums1
        for(int i = 0; i < n; i++) {
            nums1.push_back(nums2[i]);
        }

        // Sort the combined nums1 array
        sort(nums1.begin(), nums1.end());
    }
};
