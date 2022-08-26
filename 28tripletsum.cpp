 //MAP APPROACH     O(n2),O(n)
 int cur ;
        int ans = 0 ;
        for(int i = 0 ; i <n-2 ;i++)
        {
            unordered_set<int> s ;
            cur = X-A[i] ;
         for(int j = i+1 ; j <n ;j++)
         {
             if(s.find(cur - A[j]) != s.end())
             {
                 ans =1 ;
             }
             else
             s.insert(A[j]) ;
         }
        }
        return ans ;
    }

 //THREE POINTER APPROACH    O(n2),O(1)   
 {
        sort(A,A+n) ;
        int ans =0 ;
       for(int i = 0 ; i <n-2; i++)
       {
           int ans = 0 ;
           int l= i+1 ;
           int r =n-1 ;
           while(l<r)
           {
               if(A[i] + A[l] + A[r] == X)
               {
                  return 1 ;
                  break ;
               }
               else if(A[i] + A[l] + A[r]< X)
               l++ ;
               else
               r-- ;
           }
    
       }
       return 0 ;
    }

};
