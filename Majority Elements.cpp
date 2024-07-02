class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int answer = nums[nums.size()/2];
        return answer;
    }
};
