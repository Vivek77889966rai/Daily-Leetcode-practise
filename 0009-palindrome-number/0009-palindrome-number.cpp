class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) 
         return false;
        if (x == 0) 
         return true;
        long long  rev=0;
        long long temp=x;
        while(temp!=0){
            int last_digit = temp%10;
            rev = rev*10 +last_digit;
            temp = temp/10;
        }
        
        return (rev==x);
    }
};