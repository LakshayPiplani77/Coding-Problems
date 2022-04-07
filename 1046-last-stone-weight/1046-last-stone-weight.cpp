class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        //Keep track of the number of stones
        int num_stones = stones.size();
        
        //Sort the stones in order so we can assess the heaviest two
        sort(stones.begin(),stones.end());
        
        //While we have more than one stone.....
        while (num_stones > 1){
            
            //If the two greatest stones are the same weight...
            if (stones[stones.size()-1] == stones[stones.size()-2]){
                
                //Set the stones to zero
                stones[stones.size()-1] = 0;
                stones[stones.size()-2] = 0;
                
                //Remove the current two stones from consideration and sort
                num_stones-=2;
                sort(stones.begin(),stones.end());
            } 
            //If the two greatest stones are not the same weight....
            else {
                
                //Set small stone to zero and adjust big stone's weight
                stones[stones.size()-1] -= stones[stones.size()-2];
                stones[stones.size()-2] = 0;
                
                //reduce number of stones and sort
                num_stones--;
                sort(stones.begin(),stones.end());
            }
        }
        //return the last stone
        return stones[stones.size()-1];
    }
};