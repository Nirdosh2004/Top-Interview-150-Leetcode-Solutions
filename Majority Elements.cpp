class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Sort the vector 'nums' in non-decreasing order
        sort(nums.begin(), nums.end());

        // The majority element is the element that appears more than n/2 times.
        // After sorting, the majority element must be at the middle index (n/2).
        // Calculate the middle index and use it to get the majority element.
        int answer = nums[nums.size() / 2];

        // Return the majority element
        return answer;
    }
};

/*
Explanation:


Sorting:

sort(nums.begin(), nums.end());: This line sorts the input vector nums in non-decreasing order.
Finding the Majority Element:

int answer = nums[nums.size() / 2];:
The majority element is defined as the element that appears more than n/2 times in the array, where n is the size of the array.
After sorting, the majority element will always be located at the middle index (n/2) of the array.
Return:

return answer;: Returns the majority element found at the middle index of the sorted array.


*/
