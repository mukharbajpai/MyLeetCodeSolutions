//153. Find Minimum in Rotated Sorted Array
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        //ffftttt
        //predicate: A[i]<A[0]
        //First T
        int hi,lo,mid;
        lo=0;
        hi=n-1;
        while(lo<hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]<nums[0]){
                hi=mid;
            }
            else
                lo=mid+1;
        }
        if(nums[lo]<nums[0])
        return nums[lo];
        else return nums[0];
        
    }
};