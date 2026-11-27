#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> x(n), y(n);
 
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
 
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
 
        long long dp1 = 0, dp2 = 0;
 
        for (int i = n - 1; i >= 0; i--) {
            long long new1 = max(x[i] - y[i] + dp1, dp2);
            long long new2 = min(y[i] - x[i] + dp2, dp1);
 
            dp1 = new1;
            dp2 = new2;
        }
 
        if (dp1 > 0) {
            cout << "Sunny
";
        }
        else if (dp1 < 0) {
            cout << "Aubrey
";
        }
        else {
            cout << "Draw
";
        }
    }
 
    return 0;
}