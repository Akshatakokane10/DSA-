#include <vector>

class Solution {
public:
    std::vector<int> findUnion(std::vector<int>& a, std::vector<int>& b) {
        std::vector<int> unionArr;
        int i = 0, j = 0;

        while (i < a.size() || j < b.size()) {
            int current;
            if (i < a.size() && (j >= b.size() || a[i] < b[j])) {
                current = a[i++];
            } else if (j < b.size() && (i >= a.size() || a[i] > b[j])) {
                current = b[j++];
            } else { // a[i] == b[j]
                current = a[i++];
                j++;
            }
            if (unionArr.empty() || unionArr.back() != current) {
                unionArr.push_back(current);
            }
        }
        
        return unionArr;
    }
};
