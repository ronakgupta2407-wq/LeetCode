class Solution {
public:
    int reverse(int x) {
        long rev = 0;
       while( x != 0 ){
        int digit = x%10;
        x = x/10;
        rev = rev*10 + digit;

       } 
       if(rev > 2147483647 || rev < -2147483647){
        return 0;
       }
       return rev;
    }
    
};