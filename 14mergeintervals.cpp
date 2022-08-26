class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         if(intervals.size() == 1)
              return intervals;
        int prev = 0;
        
        sort(intervals.begin(), intervals.end());
        
        for(int curr = 1; curr<intervals.size(); curr++)
        {
            if(intervals[curr][0] <= intervals[prev][1])
                intervals[prev][1] = max(intervals[curr][1], intervals[prev][1]);
            else
                intervals[++prev] = intervals[curr];
        }
        
        intervals.resize(prev+1);
        return intervals;
        
    }
};
               
            
       