#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long l, a, b;
        cin >> l >> a >> b;
 
        long long g1 = gcd(l, a);
        long long g2 = gcd(l, b);
 
        cout << l / lcm(g1, g2) << '
';
    }
 
    return 0;
}