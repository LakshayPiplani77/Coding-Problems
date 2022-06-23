class Solution {
public:
     int scheduleCourse(vector<vector<int>>& courses) {
        priority_queue<int> pq;
        sort(courses.begin(), courses.end(), [](auto &a, auto &b) {return a[1] < b[1];});

        int total_duration = 0;
        for(int i=0; i<courses.size(); i++) {
            if (courses[i][0] + total_duration <= courses[i][1]) {
                total_duration += courses[i][0];
                pq.push(courses[i][0]);
            } else {
                if(pq.size() && courses[i][0] < pq.top()) {
                    total_duration += courses[i][0] - pq.top();
                    pq.pop();
                    pq.push(courses[i][0]);
                }
            }
        }
        return pq.size();
    }
};