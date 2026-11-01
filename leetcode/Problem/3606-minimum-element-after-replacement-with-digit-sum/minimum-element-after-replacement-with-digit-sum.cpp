class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = 0;

        for(int i = 0; i < nums.size(); i++) {
            int number = nums[i];
            int sum = 0;

            while(number > 0) {
                int digit = number % 10;
                sum = sum + digit;
                number = number / 10;
            }

            if(i == 0) {
                min = sum;
            }
            else if(sum < min) {
                min = sum;
            }
        }

        return min;
    }
};