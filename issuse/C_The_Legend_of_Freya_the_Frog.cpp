#include <iostream>
#include <cmath> // for ceil
using namespace std;

long long calculateMoves(long long x, long long y, long long k) {
    long long jx = (abs(x) + k - 1) / k; // equivalent to ceil(abs(x) / k)
    long long jy = (abs(y) + k - 1) / k; // equivalent to ceil(abs(y) / k)
    
    // Total moves required to reach both x and y
    long long totalMoves = jx + jy;

    // If totalMoves is odd, we need one extra move to make it even
    if (totalMoves % 2 != 0) {
        totalMoves += 1;
    }

    return totalMoves;
}

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << calculateMoves(x, y, k) << endl;
    }
    return 0;
}
