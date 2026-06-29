class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0,j=0;

        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                merged.push_back(nums1[i++]);
            }else
            merged.push_back(nums2[j++]);
        }
    

    while(i < nums1.size()) {
    merged.push_back(nums1[i++]);}
    while(j < nums2.size()) 
    {merged.push_back(nums2[j++]);}

    int a = merged.size();

    if(a%2 ==1){
        return merged[a/2];
    } else{
        return (merged[a/2]+ merged[a/2 -1])/2.0;
    }
}
};