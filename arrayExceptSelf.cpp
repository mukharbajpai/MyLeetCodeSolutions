//238-Product of array except self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int PrefixProduct=1;
        vector <int> SuffixProduct(n+1,1);
        vector <int> sol(n,1);
        for(int i= n-1;i>=0;i--){
            SuffixProduct[i]=SuffixProduct[i+1]*nums[i];
        }
        for(int i=0;i<n;i++){
            sol[i]=SuffixProduct[i+1]*PrefixProduct;
            PrefixProduct*= nums[i];
        }
        return sol;
    }
};