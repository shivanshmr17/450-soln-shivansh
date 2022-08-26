 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans ;
        int i  ;
        float x ;
        
        for(i = 0 ; i<nums1.size() ;i++){
            ans.push_back(nums1[i]) ;
        }
        
       for(i= 0 ;i <nums2.size() ; i++){
            ans.push_back(nums2[i]) ;
        }
        sort(ans.begin(),ans.end()) ;
        int k = ans.size() ;
            if(k%2 == 1)
            return ans[k/2] ;
            else{
             x =double((ans[k/2] + ans[(k/2)-1])) /2 ;
            return x ;
            }
        
        
    }
};