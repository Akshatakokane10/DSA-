class Solution {
  public:
    int largest(vector<int> &arr) {
        int n=arr.size();
        int greater=arr[0];
        for(int i=0;i<n;i++)
        {
            if(greater<arr[i])
            {
                greater=arr[i];
            }
        }
        return greater;
    }
};