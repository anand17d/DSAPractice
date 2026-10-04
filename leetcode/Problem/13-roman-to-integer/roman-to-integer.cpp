class Solution {
public:
    int romanToInt(string s) {
        
        int value = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == 'I') {
                if(i + 1 < s.size() && (s[i+1] == 'V' || s[i+1] == 'X'))
                    value = value - 1;
                else
                    value = value + 1;
            }
            
            else if(s[i] == 'V') {
                value = value + 5;
            }
            
            else if(s[i] == 'X') {
                if(i + 1 < s.size() && (s[i+1] == 'L' || s[i+1] == 'C'))
                    value = value - 10;
                else
                    value = value + 10;
            }
            
            else if(s[i] == 'L') {
                value = value + 50;
            }
            
            else if(s[i] == 'C') {
                if(i + 1 < s.size() && (s[i+1] == 'D' || s[i+1] == 'M'))
                    value = value - 100;
                else
                    value = value + 100;
            }
            
            else if(s[i] == 'D') {
                value = value + 500;
            }
            
            else if(s[i] == 'M') {
                value = value + 1000;
            }
        }

        return value;
    }
};