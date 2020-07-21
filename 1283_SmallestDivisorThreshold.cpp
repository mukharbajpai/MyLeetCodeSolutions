//1283-Find Smallest Divisor Givena Threshold
class Solution {
public:
     int S(vector<int> &nums,int divisor){
            int n=nums.size(),i,sum=0;
            for(i=0;i<n;i++){
                sum+=ceil((float)nums[i]/divisor);
            }
            return sum;
        }
    int BinarySearch(vector<int>&nums ,int lo, int hi, int threshold){
        int mid;
        while(lo<hi){
            mid=lo+(hi-lo)/2;
            //first T predicate
            //S(x)<=Threshold
            if(S(nums,mid)<=threshold){
                hi=mid;
            }
            else
                lo=mid+1;
        }
        return lo;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        //Search Space reduce
        int n=nums.size(),i, maxNum=INT_MIN;
        for(i=0;i<n;i++){
            maxNum=max(nums[i],maxNum);
        }
        return BinarySearch(nums,1,maxNum,threshold);
       
    }
};