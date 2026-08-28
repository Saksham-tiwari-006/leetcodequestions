class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int cntcurr=0;
        int longest=0;
        int  lastsm=INT_MIN;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
                if(arr[i]-1==lastsm){
                    cntcurr++;
                    lastsm=arr[i];
                }
                else if(arr[i]!=lastsm){
                    cntcurr=1;
                    lastsm=arr[i];
                }
                longest=max(longest,cntcurr);
        }
        return longest;
    }
};