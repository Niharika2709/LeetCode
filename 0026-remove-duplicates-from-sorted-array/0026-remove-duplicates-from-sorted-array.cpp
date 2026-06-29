class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int slow = 0;
      int fast = 0 ;
      int k =0;
      while(slow<=fast && fast<nums.size()){
        if(nums[slow]==nums[fast]){
            fast++;
        }
        else if (nums[slow]!= nums[fast]){
            slow++;
            nums[slow]=nums[fast];
        }     
         }
         k = slow+1;
         return k ;
    }
};