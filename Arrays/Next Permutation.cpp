vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int i = n-1;

    while(i > 0 and permutation[i] < permutation[i-1])
        i--;
    
    if(i == 0)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    int j = n-1;

    while(j >= i and permutation[i-1] > permutation[j])
        j--;
    
    swap(permutation[i-1], permutation[j]);

    reverse(permutation.begin()+i, permutation.end());

    return permutation;
}