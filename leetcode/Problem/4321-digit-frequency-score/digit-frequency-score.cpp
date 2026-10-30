class Solution {
public:
    int digitFrequencyScore(int n) {
        int score = 0;

        for (int i = 0; i <= 9; i++) {
            int temp = n;
            int count = 0;

            while (temp > 0) {
                int digit = temp % 10;

                if (digit == i) {
                    count++;
                }

                temp = temp / 10;
            }

            score += i * count;
        }

        return score;
    }
};