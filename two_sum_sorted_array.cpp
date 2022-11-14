class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
       int start =0;
       int end = numbers.size()-1;

       while(start<end){
           if(numbers[start] + numbers[end]>target){
               end--;
           }
           else if(numbers[start]+numbers[end]<target){
               start++;
           }
           else{
            //    return {1 based-indexing}
             
            return  vector<int>{start+1,end+1};
           }
       }
  return  vector<int>{};

    }
};
