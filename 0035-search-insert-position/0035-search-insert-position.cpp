class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = nums.size()/2;
        int left=0;
        int right= nums.size()-1;
    while(left<=right){
        if(nums[mid]==target){
           return mid;

        }
        else if(nums[mid]>target){
           right = mid -1 ;
           mid = (right + left)/2;
        }
        else if(nums[mid]<target){
           left = mid +1;
           mid = (right + left)/2;
        } 
        
        } 
    return left;
    }
};