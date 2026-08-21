class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int array_sum=0;
        for(int i=0;i<nums.size();i++){
            array_sum+=nums[i];
            
        }
        int n=nums.size();
        int totalsum=n*(n+1)/2;

        
        return totalsum-array_sum;
    }
};