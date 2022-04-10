class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> score;
        int ans;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                score.push_back(score[score.size()-1]+score[score.size()-2]);
            }
            else if(ops[i]=="D"){
                score.push_back(2*score[score.size()-1]);
            }
            else if(ops[i]=="C"){
                score.erase(score.end()-1);
            }
            else{
                score.push_back(stoi(ops[i]));
            }
        }
        ans=accumulate(score.begin(),score.end(),0);
        return ans;
    }
};