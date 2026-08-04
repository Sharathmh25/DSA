class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int k,l;
        int j=n-1;
       while(i<j ){
           if(nums[i]+nums[j]==target){
            k=i+1;
            l=j+1;
                break;
           }
           else if(nums[i]+nums[j]>target){
                j--;
           }
           else{
            i++;
           
           }

           
       }
        return {k,l};
    }
};