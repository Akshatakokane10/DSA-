class Solution {
public:
    int removeDuplicates(vector<int>& nums ) {
    if(nums.empty()) return 0;
    int unique = 0;
	
	for(int  i=1;i<nums.size();++i)
	{
		if(nums[i] != nums[unique])
		{
            unique++;
		    nums[unique] = nums[i];
            
		}
	}
        return unique+1;
    }
    
};