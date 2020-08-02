//75- Sort COlors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int lo,mid,hi;
        lo=mid=0;
        hi=n-1;
        while(mid<=hi){
            if(nums[mid]==0){
                swap(nums[mid++],nums[lo++]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[hi--]);
             
            }
        }
        //for(int i=0;i<n;i++)
        // cout<<nums[i]<<",";
    }
};