// JSCPC 2023 / Don't WA / I.Elevator
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        cout << n - m + 1 << endl;
    }
    return 0;
}