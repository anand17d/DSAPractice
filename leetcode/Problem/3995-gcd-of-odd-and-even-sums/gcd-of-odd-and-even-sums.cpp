class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int oddsum = 0;
        int evensum = 0;

        for(int i = 0; i < n; i++) {
            oddsum = oddsum + (2*i + 1);
        }

        for(int i = 0; i < n; i++) {
            evensum = evensum + (2*i + 2);
        }

        while(oddsum != 0) {
            int remainder = evensum % oddsum;
            evensum = oddsum;
            oddsum = remainder;
        }

        return evensum;
    }
};