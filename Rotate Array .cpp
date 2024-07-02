class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Ensure k is within the bounds of the array size by taking k modulo nums.size()
        k %= nums.size();

        // Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining elements from position k to the end of the array
        reverse(nums.begin() + k, nums.end());
    }
};

/*
### Initial State:
- `nums = [1, 2, 3, 4, 5, 6, 7]`
- `k = 3`

### Step 1: Modulo Operation
- `k %= nums.size();` 
  - `k = 3 % 7 = 3` 

### Step 2: Reverse the Entire Array
- `reverse(nums.begin(), nums.end());`
  - Result: `nums = [7, 6, 5, 4, 3, 2, 1]`

### Step 3: Reverse the First k Elements
- `reverse(nums.begin(), nums.begin() + k);`
  - Result: `nums = [5, 6, 7, 4, 3, 2, 1]`

### Step 4: Reverse the Remaining Elements
- `reverse(nums.begin() + k, nums.end());`
  - Result: `nums = [5, 6, 7, 1, 2, 3, 4]`

### Final Result:
- `nums = [5, 6, 7, 1, 2, 3, 4]`

### Summary:
1. Initial array: `[1, 2, 3, 4, 5, 6, 7]`
2. Reverse the entire array: `[7, 6, 5, 4, 3, 2, 1]`
3. Reverse the first 3 elements: `[5, 6, 7, 4, 3, 2, 1]`
4. Reverse the remaining elements from position 3 onwards: `[5, 6, 7, 1, 2, 3, 4]`
*/
