class Solution {
public:
    vector<long long> countBlackBlocks(int m, int n, vector<vector<int>>& coordinates) {
        unordered_map<long long, int> countMap; // Map to store the count of black blocks
        vector<long long> res(5); // Result vector to store the final counts
        
        for (vector<int>& coor : coordinates) {
            int x = coor[0], y = coor[1];
            for (int dx = 0; dx <= 1; dx++) {
                for (int dy = 0; dy <= 1; dy++) {
                    if (x - dx >= 0 && y - dy >= 0 && x - dx < m - 1 && y - dy < n - 1) {
                        // Calculate the key for the map using the coordinates
                        long long key = static_cast<long long>(x - dx) * n + y - dy;
                        countMap[key] = countMap[key] + 1; // Increment the count of black blocks for the key
                    }
                }
            }
        }

        // Iterate over the countMap and update the result vector
        for (auto count : countMap) {
            res[count.second]++; // Increment the count in the result vector at the corresponding index
        }
        
        int sum = accumulate(res.begin(), res.end(), 0LL); // Calculate the sum of all counts
        res[0] = 1LL * (m - 1) * (n - 1) - sum; // Calculate the count of white blocks and store it at index 0

        return res; // Return the final result vector
    }
};