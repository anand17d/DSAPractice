class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        string ans[1000];
        int count = 0;
        int minSum = 10000;

        for(int i = 0; i < list1.size(); i++) {

            for(int j = 0; j < list2.size(); j++) {

                if(list1[i] == list2[j]) {

                    int sum = i + j;

                    if(sum < minSum) {
                        minSum = sum;
                        count = 0;

                        ans[count] = list1[i];
                        count++;
                    }
                    else if(sum == minSum) {
                        ans[count] = list1[i];
                        count++;
                    }
                }
            }
        }

        vector<string> result(count);

        for(int i = 0; i < count; i++) {
            result[i] = ans[i];
        }

        return result;
    }
};