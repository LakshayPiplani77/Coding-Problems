// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

double posAverage(vector<int> nums) {
    // code here
    double sum = 0;
    double count = 0;
    for(double i = 0;i<nums.size();i++){
        if(nums[i] >= 0)
        {
            sum += nums[i];
            count++;
        }
    }
    double avg = sum/count;
    return avg;
   
}


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        string str;
        getline(cin, str);
        vector<int> nums;
        istringstream ss(str);

        string num;
        while (ss >> num) {
            nums.push_back(stoi(num));
        }

        double avg = posAverage(nums);
        avg = ((int)(avg * 100)) / 100.0;
        printf("%.2f\n", avg);
    }

    return 0;
}  // } Driver Code Ends