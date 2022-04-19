// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void utility(int n);

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        utility(n);
        cout << endl;
    }

    return 0;
}// } Driver Code Ends


// User function Template for C++

void utility(int n) {
    int i;
    for (int i = 1;i<=10;i++) 
    cout << i* n << " ";
}
