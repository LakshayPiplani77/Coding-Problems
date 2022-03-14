class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int> ans; 
    map<int,int> map; 
    for(int i = 0; i < nums.size() ; i++){
        map[nums[i]]++; 
    }
    for(auto it = map.begin() ; it != map.end() ; it++){
        ans.push_back(it->first); 
    }
    nums = ans; 
    return nums.size();
}
};