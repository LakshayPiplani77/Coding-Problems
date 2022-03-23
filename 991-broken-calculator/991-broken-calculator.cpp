class Solution {
public:
    int brokenCalc(int startValue, int target) {
      
      if(startValue==target)
            return 0;
        if(startValue>target){
            return startValue-target;
        }
        if(target%2==0)
            return brokenCalc(startValue, target/2)+1;
        else
            return brokenCalc(startValue, (target+1)/2)+2;
    }
};