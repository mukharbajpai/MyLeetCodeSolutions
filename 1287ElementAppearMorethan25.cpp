//1287. Element Appearing More Than 25% In Sorted Array
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int k=n/4, count=0,prev=-1;
        for(int i=0; i<n;i++){
            if(prev==arr[i] || prev== -1){
                count++;
                prev=arr[i];
            }
            else{
                if(count>k){
                    return prev;
                }
                else{
                    count=1;
                    prev=arr[i];
                }
            }
        }
        return prev;
    }
};