vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;

  for(int i=1; i<=n; i++)
  {
    vector<long long int> level;
    level.push_back(1);

    if(i == 1)
    {
      ans.push_back(level);
      continue;
    }

    for(int j=1; j<i-1; j++)
      level.push_back(ans[i-2][j-1] + ans[i-2][j]);
    
    level.push_back(1);

    ans.push_back(level);
  }

  return ans;
}