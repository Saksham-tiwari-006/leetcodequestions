class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int rem=0;
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem],i};
            }
            mpp[nums[i]]=i;//store the index 
        }
        return {-1,-1};
    }
};