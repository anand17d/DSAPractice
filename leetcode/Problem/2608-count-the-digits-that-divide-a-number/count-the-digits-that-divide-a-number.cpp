class Solution {
public:
    int countDigits(int num) {
            int count = 0;
            int original = num;
        while(num>0){
           int d = num%10;
           num  = num/10;

           

            if(d!=0&&original%d==0){
            count++;
           }
        }
           return count;
    }
};