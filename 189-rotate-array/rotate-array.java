class Solution {
    public void rotate(int[] nums, int k) {
        ArrayList<Integer> arr=new ArrayList<>();
       
        int n=nums.length;

        k=k%n;
        for(int i=0;i<n;i++){
            arr.add(nums[(i-k+n)%n]);
        }
        for(int i=0;i<n;i++){
            nums[i]=arr.get(i);
        }
    }
}