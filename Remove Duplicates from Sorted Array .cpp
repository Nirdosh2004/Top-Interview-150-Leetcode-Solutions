class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1; // Initialize a counter for the position of the next unique element
        for (int i = 1; i < nums.size(); i++) { // Start loop from the second element
            if (nums[i] != nums[i - 1]) { // Check if the current element is different from the previous one
                nums[k] = nums[i]; // Place the current unique element at position k
                k++; // Increment the counter
            }
        }
        return k; // Return the number of unique elements
    }
};
