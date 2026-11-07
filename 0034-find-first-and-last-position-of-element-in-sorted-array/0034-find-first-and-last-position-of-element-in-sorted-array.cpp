class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f_index = -1, l_index = -1;
        int n = nums.size();
        
        int start = 0, end = n - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                f_index = mid;
                end = mid - 1; 
            } else if(nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
    
        start = 0; 
        end = n - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                l_index = mid;
                start = mid + 1; 
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return {f_index, l_index};
    }
};