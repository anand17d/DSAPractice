
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        for(int i = 0; i < k; i++) {

            int min = nums[0];
            int index = 0;

            // Find minimum element
            for(int j = 1; j < nums.size(); j++) {

                if(nums[j] < min) {
                    min = nums[j];
                    index = j;
                }
            }

            // Replace minimum element
            nums[index] = nums[index] * multiplier;
        }

        return nums;
    }
};
