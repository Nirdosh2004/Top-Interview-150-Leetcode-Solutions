class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Initialize a variable 'k' to keep track of the position for unique elements
        int k = 0;

        // Iterate through each element in the vector 'nums'
        for(auto it : nums) {
            // Check if 'k' is less than 2 or the current element is not equal to the element
            // that is two positions behind 'k' in the modified array
            if(k == 0 || k == 1 || nums[k-2] != it){
                // Place the current element at the 'k'th position in the modified array
                nums[k] = it;
                // Increment 'k' to move to the next position
                k++;
            }
        }

        // Return the length of the modified array with no more than two duplicates of any element
        return k;
    }
};
