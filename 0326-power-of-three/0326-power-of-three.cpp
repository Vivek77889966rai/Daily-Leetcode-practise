class Solution {
public:
    bool isPowerOfThree(int n) {
      //base 
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        
        return ((n%3==0) && isPowerOfThree(n/3));
    }
};