
class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            int count = 0;

            while (n > 0) {
                int digit = n % 10;
                count = count + digit * digit;
                n = n / 10;
            }

            n = count;
        }

        if (n == 1) {
            return true;
        }
        else {
            return false;
        }
    }
};
