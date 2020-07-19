class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        //predicate A[i]<A[i-1]
        //Last F
        int n=A.size(),lo,mid,hi;
        hi=n-1;
        lo=0;
        while(lo<hi){
            mid=lo+(hi-lo+1)/2;
            if(A[mid]<A[mid-1])
                    hi=mid-1;
            else
                lo=mid;
        }
        return lo;
    }
};