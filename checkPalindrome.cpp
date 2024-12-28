class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int real=x;
        long reverse=0;

        while(x>0){
           int lastDigit = x%10;
            x=x/10;
            reverse = (reverse*10) + lastDigit;

        }
        return reverse == real;



    }
};