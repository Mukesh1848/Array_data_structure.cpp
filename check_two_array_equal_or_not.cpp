class Solution{
    public:

   
    bool check(vector<ll> A, vector<ll> B, int N) {
        
      //code here
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        if(A == B) return 1;
        else return 0;
        
    }
};
