class Solution {
public:
    int sqaureSum(int n){
        int sum=0;
        while(n>0){
            int last=n%10;
            sum=sum+last*last;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1 && s.find(n)==s.end()){
            s.insert(n);
            n=sqaureSum(n);
        }
        return n==1;

    }
};