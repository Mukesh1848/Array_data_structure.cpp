class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int i=0;
            int j=0;
            int size = nums.size();
            while(i<size){
            if(nums[i] != 0){
            swap(nums[j],nums[i]);
            i++;
            j++;
            }
            else{
            i++;
            }
            }
    }
};
