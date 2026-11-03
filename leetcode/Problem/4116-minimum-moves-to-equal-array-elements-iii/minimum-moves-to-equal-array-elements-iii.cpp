class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxValue = *max_element(nums.begin(), nums.end());
        int moves = 0;

        for (int num : nums) {
            moves += maxValue - num;
        }

        return moves;
    }
};