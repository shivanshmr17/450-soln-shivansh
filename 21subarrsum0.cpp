 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++){
            if(arr[i]==0) return true;
        }
        
        unordered_set<int> mp;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum==0 || mp.find(sum)!=mp.end()) return true;
            mp.insert(sum);
        }
        return false;
    }
};