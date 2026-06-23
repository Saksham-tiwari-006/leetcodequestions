class Solution {
public:
    int maxArea(vector<int>& hight) {
        int l=0;
        int r=hight.size()-1;
        int maxwater=0;
        while(l<r){
            int w=r-l;
            int h=min(hight[l],hight[r]);
            int currentwater=w*h;
            maxwater=max(maxwater,currentwater);

            if(hight[l]<hight[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxwater;

    }
};