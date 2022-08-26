  long long maxSubarraySum(int arr[], int n){    //Doubt use of int_MIN
        
          int cur = 0, max = INT_MIN;
        
        for(int i = 0 ;i<n ;i++)
        {
           cur = cur+arr[i] ;
           if(cur>max)
           {
               max =cur ;
           }
           if(cur<0)
           {
             cur = 0 ;
           }
        }
        return max ;
     }