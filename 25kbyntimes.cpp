class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m ; 
        vector<int>ans; 
        for(int i =0 ; i<nums.size(); i++)
        {
            m[nums[i]]++ ;
         }
        for(int i =0 ; i<nums.size(); i++){
        if(m[nums[i]] > nums.size()/3)
        {
          ans.push_back(nums[i]); 
            m[nums[i]] = 0 ;
        }
       }
        return ans ;
        
    }
};