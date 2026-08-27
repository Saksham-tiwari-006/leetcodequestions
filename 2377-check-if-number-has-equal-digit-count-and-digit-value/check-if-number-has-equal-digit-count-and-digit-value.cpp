class Solution {
public:
    bool digitCount(string num) {

        int freq[10] = {0};

        // Count frequency of every digit
        for(char c : num) {
            freq[c - '0']++;
        }

        // Check the condition
        for(int i = 0; i < num.length(); i++) {

            int expected = num[i] - '0';

            if(freq[i] != expected) {
                return false;
            }
        }

        return true;
    }
};