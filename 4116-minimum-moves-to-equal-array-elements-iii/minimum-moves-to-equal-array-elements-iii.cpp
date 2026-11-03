class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        int i = 0;
        int maxi = nums[n-1];
        while(!all_of(nums.begin(), nums.end(),
              [maxi](int x) { return x == maxi; })){
            if(nums[i]<maxi){
                nums[i]++;
                count++;
                }
                i++;
                if(i == n) {
                i = 0;
                }
            }
    return count; 
    }
};