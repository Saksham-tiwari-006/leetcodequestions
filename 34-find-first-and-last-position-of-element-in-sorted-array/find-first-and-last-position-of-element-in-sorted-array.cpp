class Solution {
public:
    int f(vector<int>nums,int target){
        int ans=-1;
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                ans=m;
                h=m-1;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return ans;
    }
     int l(vector<int>nums,int target){
        int ans=-1;
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==target){
                ans=m;
                l=m+1;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {f(nums,target),l(nums,target)};
    }
};