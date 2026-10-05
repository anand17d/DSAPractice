class Solution {
public:
    int firstUniqChar(string s) {
        int result = -1;

        for(int i = 0; i < s.size(); i++) {

            result = i;

            for(int j = 0; j < s.size(); j++) {

                if(i != j && s[i] == s[j]) {
                    result = -1;
                    break;
                }
            }

            if(result != -1)
                return result;
        }

        return -1;
    }
};