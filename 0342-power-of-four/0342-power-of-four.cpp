class Solution {
public:
    bool isPowerOfFour(int n) {
        //base case 
        if(n==1)
        {
         return true;
        }
        if(n==0)
        {
            return false;
        }


        //Check remainder is 0 or not when divided by 4 and recursion call.
        return ((n % 4 == 0) && isPowerOfFour(n/4));
    }
}; 