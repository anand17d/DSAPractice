class Solution {
public:
       bool checkIfPangram(string sentence){
               string alpha = "abcdefghijklmnopqrstuvwxyz";
               int count = 0;

               for(int i=0;i<alpha.size();i++){
                for(int j=0;j<sentence.size();j++){
                         if(sentence[j]==alpha[i]){
                            count++;
                            break;
                         }
                }
               }
               if(count==26){
                return true;
               }
               else{
                return false;
               }

        
    }
};