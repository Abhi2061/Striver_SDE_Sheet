vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size(), sz = 0;

    for(int i=0; i<n; i++)
        sort(intervals[i].begin(), intervals[i].end());
        
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    for(int i=1; i<n; i++)
    {
        if(ans[sz][1] >= intervals[i][0])
            ans[sz][1] = max(ans[sz][1], intervals[i][1]);
        else
        {
            ans.push_back(intervals[i]);
            sz++;
        }
    }

    return ans;
}