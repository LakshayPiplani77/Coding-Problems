class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int num_stones = stones.size();
        sort(stones.begin(),stones.end());
        while (num_stones > 1){
            if (stones[stones.size()-1] == stones[stones.size()-2]){
                stones[stones.size()-1] = 0;
                stones[stones.size()-2] = 0;
                num_stones-=2;
                sort(stones.begin(),stones.end());
            } 
          else {
                stones[stones.size()-1] -= stones[stones.size()-2];
                stones[stones.size()-2] = 0;
                num_stones--;
                sort(stones.begin(),stones.end());
            }
        }
        return stones[stones.size()-1];
    }
};