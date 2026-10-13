class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
       
        for(int x:nums){
            st.insert(x);
        }
        int maxlength =0;
        for(int x:st){
        if(st.count(x-1)==0){
            int currentLength = 1;
            int next = x+1;
            while(st.count(next)==1){
                currentLength = currentLength + 1;
                next = next + 1;
            }
        
        maxlength = max(maxlength,currentLength);
        }
        }
        return maxlength;
    }
};