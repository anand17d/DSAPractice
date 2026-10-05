class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

         int arr[100];
         int j = 0;

        for(int i = 0; i < words.size(); i++) {

            for(int k = 0; k < words[i].size(); k++) {

                if(words[i][k] == x) {
                    arr[j] = i;
                    j++;
                    break;
                }
            }
        }

        vector<int> result(j);

        for(int i = 0; i < j; i++) {
            result[i] = arr[i];
        }

        return result;
    }
};