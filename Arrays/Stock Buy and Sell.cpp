int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans = 0, minPrice = INT_MAX;

    for(auto it : prices)
    {
        if(it < minPrice)
            minPrice = it;
        else
            ans = max(ans, it-minPrice);
    }

    return ans;
}