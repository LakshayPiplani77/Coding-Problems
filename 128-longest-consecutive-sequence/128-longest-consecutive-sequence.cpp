class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //insert all the elements into a hashset
        unordered_set<int> h;
        for(int num: nums)
        {
            h.insert(num);
        }
        int longestStreak = 0;
        for(int num : nums){
            if(!h.count(num-1))
            {
                int currentNum = num;
                int currentStreak = 1;
                while(h.count(currentNum+1))
                {
                    currentNum += 1;
                    currentStreak += 1;
                }
                longestStreak = max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }
};