class Solution { 
public: 
    int lengthOfLastWord(string s) { 
        int l = 0; 

        for(int i = s.size()-1; i >= 0; i--) { 
            
            if(s[i] == ' ') {
                if(l > 0)
                    break;
            }
            else {
                l++;
            }
        } 

        return l; 
    } 
};