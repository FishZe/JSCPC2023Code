// JSCPC 2023 / Don't WA / J.Similarity (Easy Version)
#include <iostream>
#include <map>
#include <set>

using namespace std;

set<string> mm;
set<string> ss;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, ans = 0;
        cin >> n;
        mm = set<string>();
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            ss = set<string>();
            for(int j = 0; j < s.length(); j++){
                string now;
                now += s[j];
                for(int k = j + 1; k < s.length() + 1; k++){
                    if(mm.find(now) != mm.end()) {
                        ans = max(ans, k - j);
                    } else {
                        ss.insert(now);
                    }
                    if(k != s.length()) {
                        now += s[k];
                    }
                }
            }
            for(auto it : ss) {
                mm.insert(it);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
