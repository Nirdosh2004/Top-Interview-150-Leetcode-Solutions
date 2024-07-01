class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Initialize a counter for the new length of the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) { // Check if the current element is not equal to the given value
                nums[k] = nums[i]; // Place the current element at the k-th position
                k++; // Increment the counter
            }
        }
        return k; // Return the new length of the array
    }
};
