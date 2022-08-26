 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
          {
            vector<int> ans;
         unordered_map <int,int> map1;
         unordered_map <int,int> map2;
         unordered_map <int,int> map3;
         
           for(int i=0;i<n1;i++){
             map1[A[i]]++;
         }
         
         for(int i=0;i<n2;i++){
             map2[B[i]]++;
         }
         
        for(int i=0;i<n3;i++){
             map3[C[i]]++;
         }
         
         for(int it=0;it<n1;it++){
          if(map1[A[it]] && map2[A[it]] && map3[A[it]]){
              ans.push_back(A[it]);
              map1[A[it]] = 0 ;
          }
         }
            return ans;
        }

};