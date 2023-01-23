class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum_of_elements =0;
        for (int i=0;i<nums.size();i++)
         sum_of_elements += nums[i];
        
        int n= nums.size();
        int temp;
        int digit_sum=0;
        for (int i = 0; i < nums.size(); i++){
        while (nums[i] > 0)
        {
        temp = nums[i] % 10;
        digit_sum += temp;
        nums[i] = nums[i]/10; 
        }
        }
        
        int diff= abs(sum_of_elements - digit_sum);
        return diff;
    }
};