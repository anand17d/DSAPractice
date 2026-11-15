
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total = 0;

        for (int i = num1; i <= num2; i++) {
            int n = i;
            int arr[10];
            int count = 0;

            // Extract digits
            while (n > 0) {
                arr[count] = n % 10;
                count++;
                n = n / 10;
            }

            // Check peaks and valleys
            for (int j = count - 2; j >= 1; j--) {
                if ((arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) ||
                    (arr[j] < arr[j - 1] && arr[j] < arr[j + 1])) {
                    total++;
                }
            }
        }

        return total;
    }
};
