class Solution {
public:
    bool isfreq(int freq1[], int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        // to store the rfeq of the character 
        for(int i=0;i<s1.length();i++){
            int idx=s1[i]-'a';
            freq[idx]++;
        }

        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int winfreq[26]={0};
            int winidx=0;
            int idx=i;
            while(winidx<windsize && idx<s2.length()){
                winfreq[s2[idx]-'a']++;
                winidx++;
                idx++;
            }
            if(isfreq(freq,winfreq)){
                return true;
            }
        }
        return false;

    }
};