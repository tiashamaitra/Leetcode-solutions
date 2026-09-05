class Solution { 
public: 
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> v;
        
        int prevstart = 0;
        int prevend = 0;
        
        for(int i = 0; i < n; i++) 
        { 
            if(i == 0)
            {
                prevstart = intervals[i][0];
                prevend = intervals[i][1];
            }
            else if(intervals[i][0] <= prevend)
            { 
                prevend = max(prevend, intervals[i][1]);
            }
            else
            { 
                v.push_back({prevstart, prevend});
                
                prevstart = intervals[i][0];
                prevend = intervals[i][1];
            }
        }
        
        v.push_back({prevstart, prevend});
        
        return v;
    } 
};