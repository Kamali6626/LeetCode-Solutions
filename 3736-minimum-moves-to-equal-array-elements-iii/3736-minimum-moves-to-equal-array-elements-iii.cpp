class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];
        int count{0};
        for(int i=1;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
           while(nums[i]++ !=max){
            count++;
           }
        }
        
        return count;
    }
};