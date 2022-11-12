// first methods 

 int MissingNumber(vector<int>& array, int n) {
        
        sort(array.begin(),array.end());
        
        for(int i=0;i<n;i++){
            if(array[i]!=(i+1)){
                return (i+1);
            }
        }
    }

// 2nd methods 

int MissingNumber(int array[], int n) {
        // Your Code Here
        int sum=0;
        int sumarr=0;
        for(int i=1;i<=n;i++)
        {
           sum=sum+i;
        }
        for(int i=0;i<array.length;i++)
        {
            sumarr=sumarr+array[i];
        }
        return sum-sumarr;
    }
