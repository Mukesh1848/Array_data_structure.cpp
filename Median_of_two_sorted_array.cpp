class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
       
       for(int i =0; i<nums2.size();i++){
           nums1.push_back(nums2[i]);
       }

       sort(nums1.begin() , nums1.end());
            
        int n=nums1.size();
        if(n%2==0){
            int x=n/2;
            double a=nums1[x-1];
            double b=nums1[x];
          double res=(a+b)/2;
             return res;
        }
        
        else{
           return nums1[n/2];
        }
    }
};
