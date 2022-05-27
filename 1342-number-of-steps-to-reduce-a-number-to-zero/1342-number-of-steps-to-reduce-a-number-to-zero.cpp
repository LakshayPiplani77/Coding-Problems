class Solution {
public:
    int numberOfSteps(int num) {
        if(num < 2)
        {
            return num;
        }
        if(num & 1)
            return numberOfSteps(num-1) + 1;
        else
            return numberOfSteps(num/2) + 1;
    }
};