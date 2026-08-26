class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int CurrSum=0;
        for(int i=0;i<nums.size();i++){
            CurrSum=max(nums[i],CurrSum+nums[i]);
            maxSum=max(maxSum,CurrSum);
        }
        return  maxSum;
    }
};