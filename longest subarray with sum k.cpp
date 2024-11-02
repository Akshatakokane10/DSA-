
class Solution {
public:
    int lenOfLongestSubarr(int A[],  int N, int K) 
    { 
     map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < N; i++) {
        
        sum += A[i];
		if (sum == K) {
            maxLen = max(maxLen, i + 1);
        }
		int rem = sum - K;
		if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
		if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
	return maxLen;
}

};