class Solution {
public:
    int smallestEvenMultiple(int n) {
                    int ans;
            for(int i =1;i<100;i++){
                if((n*i)%2==0){
                    ans =  n*i;
                    break;
                }
            }
        return ans;
    }
};