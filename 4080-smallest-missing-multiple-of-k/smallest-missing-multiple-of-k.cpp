class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(auto it:nums){
            st.insert(it);
        }
        for(int i=1; ;i++){
            if(!st.contains(i*k)){
                return i*k;
            }
        }
        return -1;
    }
};