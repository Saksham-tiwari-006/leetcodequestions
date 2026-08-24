class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,int>mpp;
        int cnt=0;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                cnt+=mpp[rem];
            }
            mpp[sum]++;
        }
        
        
        
        return cnt;
    }
};