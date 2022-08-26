class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m ;
        int k ;
    for(int i = 0 ;i <nums.size(); i++)
    {
        m[nums[i]]++ ;
    }
    for(int i = 0 ;i<m.size() ; i++)
    {
        if(m[nums[i]] > 1)
         k = nums[i] ;
    }
        return k ;
    }
};