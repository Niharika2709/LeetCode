class Solution {
public:
    int reverse(int x) {
        int original = x;
        long  reverse = 0 ;
        
        while(x!=0){
         int digit = x%10;
         reverse = reverse * 10 + digit;
         x= x/10;
            }
        if(reverse> pow(2,31) - 1 || reverse <pow(-2,31)){
            return 0;    }
        return reverse;
    }
};