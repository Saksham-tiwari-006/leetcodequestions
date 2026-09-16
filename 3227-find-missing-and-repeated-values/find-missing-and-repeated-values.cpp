class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>hash(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                hash[grid[i][j]]++;
            }
        }
        int rep=-1;
        int mis=-1;
        int total=n*n;
        for(int i=1;i<=total;i++){
            if(hash[i]==2) rep=i;
            else if(hash[i]==0) mis=i;
            if(mis!=-1 && rep!=-1) break;
        }
        return {rep,mis};
    }
};