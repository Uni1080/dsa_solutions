class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int sum = nums[0];
    int largest = nums[0];
    for( int i =1; i<nums.size();i++){
    sum = max(nums[i],nums[i]+sum);
    largest = max(largest,sum);
    }
return largest;
    }
};