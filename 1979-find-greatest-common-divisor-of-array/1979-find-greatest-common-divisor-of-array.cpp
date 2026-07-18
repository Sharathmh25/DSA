class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                 max=nums[i];
            }
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        for(int i=mini;i>=1;i--){
            if(mini%i==0 && max%i==0){
                return i;
                break;
            }
        }
        return 1;
        
    }
};