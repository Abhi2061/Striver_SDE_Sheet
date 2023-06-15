vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i = m-1, j = 0;

	while(i>=0 and j<n and arr1[i] > arr2[j])
	{
		swap(arr1[i], arr2[j]);
		i--;
		j++;
	}

	sort(arr1.begin(), arr1.begin()+m);
	sort(arr2.begin(), arr2.end());
	
	i=m;
	j=0;

	while(j<n)
	{
		arr1[i] = arr2[j];
		i++;
		j++;
	}

	return arr1;
}