class Solution {
public:
    int maxArea(vector<int>& height) {
        
      int maxArea= 0;
   int left= 0;
   int right = height.size()-1;
    

    while(left<right){
        int width= right-left;
        int minHeight= min(height[left],height[right]);
        maxArea = max(maxArea,(width*minHeight));
        
       
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }

    return maxArea;
    }
};
