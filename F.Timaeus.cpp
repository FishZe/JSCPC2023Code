// JSCPC 2023 / Don't WA / F.Timaeus
#include <iostream>

using namespace std;

const int MAXN = 1e6 + 10;

long double dp[MAXN];


int main() {
    int a, b;
    double p, q;
    for (long double &i: dp) {
        i = 0.0;
    }
    cin >> a >> b >> p >> q;
    for (int i = b; i <= a; i++) {
        if (b == 1) {
            dp[i] = max((long double) dp[i - b] + (long double) (1.00 + (long double) p / 100.0), // p
                        (long double) 1.00 / ((long double) 1.00 - q / 100.0) +
                        (long double) dp[i - b]); // q
        } else {
            dp[i] = max((long double) dp[i - b] + (long double) (1.00 + (long double) p / 100.0), // p
                        (long double) 1.00 + (long double) dp[i - b + 1] * (long double) q / 100.0 +
                        (long double) (1.0 - (long double) q / 100.0) * (long double) dp[i - b]); // q
        }
    }
    printf("%.15Lf", dp[a]);
    return 0;
}