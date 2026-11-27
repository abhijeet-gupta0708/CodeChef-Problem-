#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        long long p;
        cin >> n >> k >> p;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.rbegin(), a.rend());
 
        vector<long long> pref(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + a[i];
        }
 
        long long ans = 0;
 
        for (int j = 0; j <= n / k; j++) {
            long long juice = 1LL * j * p;
            long long fresh = pref[n - j * k];
 
            ans = max(ans, juice + fresh);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}