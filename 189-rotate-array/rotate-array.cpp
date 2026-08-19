class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int d=k%n;
        vector<int>temp(d);
        // saving the last k elements
        for(int i=0;i<d;i++){
            temp[i]=nums[n-d+i];
        }

        // now shifting the elements

        for(int i=n-d-1;i>=0;i--){
            nums[i+d]=nums[i];
        }
        //now putting them at beging 
        for(int i=0;i<d;i++){
            nums[i]=temp[i];
        } 

        
        
    }
};