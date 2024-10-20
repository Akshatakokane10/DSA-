class Solution {
  public:
    
    int getSecondLargest(vector<int> &arr) {
        
        
        int largest=arr[0];
	    int second=-1;
	    int n=arr.size();

	for(int i=1;i<n;i++)
	{
		if(largest<arr[i])
		{
			second=largest;
			largest=arr[i];
		}else if(arr[i]>second && arr[i]<largest)
		{
			second = arr[i];
		}
		
	}
	return second;
    }
    
};