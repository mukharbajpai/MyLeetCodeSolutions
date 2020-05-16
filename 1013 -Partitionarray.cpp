class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int n = A.size();
        int t_sum = 0, c=0 , r_sum=0;
        for(int i =0 ; i < n ; i++){
            t_sum+=A[i];
        }
        r_sum = t_sum/3;
        
        if(t_sum %3 != 0){
            return false;
        }
        int s=0;
        for (int i = 0 ; i<n; i++){
            s+= A[i];
            if(s==r_sum){
                c++;
                s=0;
            }
                          
        }
        if(c>=3)
            return true;
        return false;
        
    }
};