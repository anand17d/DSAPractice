class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int m = 1;

        for (int i = 1; i <= n; i++) {

            sum = sum + m;

            if (i % 7 == 0) {
                m = m + 1;
                m = m - 6;
            }
            else {
                m++;
            }
        }

        return sum;
    }
};