class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0){
            return false;
        }
        int n = x;
        long long y = 0;
        
        while(n > 0){
            int digit = n%10;// get last digit
            y = y*10 + digit;// create reverse
            n = n/10;// remove last digit
        }
        if(x == y){
             return true;
        }
        else{
           return  false;
        }
    }
    
};