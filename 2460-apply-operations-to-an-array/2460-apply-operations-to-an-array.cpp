class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=i+1;
        while(j<n){
            if(nums[i]==nums[j]){
                nums[i]=nums[i]*2;
                nums[j]=0;
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
         i=0;
         j=0;
        while(j<n){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else{
                swap(nums[i],nums[j]);
                i++;
                j++;     
                    }
        }
        return nums;
    }
};