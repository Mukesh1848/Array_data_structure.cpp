class Solution {
    private:

    void solve(vector<int> nums , vector<int>output , 
                 vector<vector<int>>&ans,int index ){

          // base case 
          if(index>=nums.size()){
              ans.push_back(output);
              return ;
          }

         // excludec call 
         solve(nums , output , ans, index+1);

         // include call
         int element = nums[index];
         output.push_back(element);
         solve(nums , output , ans, index+1);

    }
     
public:

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int>output;
        int index =0;
        solve(nums , output , ans ,index);
        return ans;
    }
};
