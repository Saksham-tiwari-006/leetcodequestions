class Solution {
public:
    void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
        int l=m-1;
        int r=0;
        while(l>=0 && r<n){
            if(a1[l]>a2[r]){
                swap(a1[l],a2[r]);
                l--;
                r++;
            }
            else break;
        }
        sort(a1.begin(),a1.begin()+m);
        sort(a2.begin(),a2.begin()+n);
        for(int i=0;i<n;i++){
            a1[m+i]=a2[i];
        }

    }
};