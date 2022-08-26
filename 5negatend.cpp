 class solution{
    public:
 
 void segregateElements(int arr[],int n)
    {
        vector<int>neg ;
        vector<int>pos ;
        int k;
         for(int i = 0; i<n ; i++)
         {
             if(arr[i]>=0)
             pos.push_back(arr[i]);
         }
        
       for(int i = 0; i<n ; i++)
       {
           if(arr[i]< 0)
           neg.push_back(arr[i]) ;
       }
      
       for( k = 0 ; k<pos.size() ;k++)
       {
         arr[k] = pos[k]; 
       }
      
        for(int j=0 ; j<neg.size() ;j++)
       {
         arr[k+j] = neg[j]; 
       }
    }
 };