class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_set<int> s;
    for(auto itr : nums){
        s.insert(itr);
    }

    if(nums.size()==s.size()){
        return false;
    }
    return true;
    }
};
