//34. Find First and Last Position of Element in Sorted Array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        if(n==0) return {-1,-1};
        int lo,hi,mid;
        vector<int> res;
        //FFFTTT break
        //For first occurrence we use First T
        hi=n-1;
        lo= 0 ;
        while(lo<hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]>=target){
                hi=mid;
            }
            else
                lo=mid+1;
        }
        if(nums[lo]!=target)
            return {-1,-1};
        res.push_back(lo);
           
        lo=0;hi=n-1;
        //For last occurrence we use last F
        while(lo<hi){
            mid=lo+(hi-lo+1)/2;
            if(nums[mid]>target){
                hi=mid-1;
            }
            else
                lo=mid;
        }
        res.push_back(lo);
        return res;
    }
};