// JSCPC 2023 / Don't WA / H.Neil's Machine
#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    string s, t;
    int last = 0;
    for(int i = 0; i < n; i++){
        int now = s[i] - t[i];
        if(now < 0) {
            now += 26;
        }
        if(now != last) {
            ans ++;
        }
        last = now;
    }
    cout << ans;
    return 0;
}