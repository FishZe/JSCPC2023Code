// JSCPC 2023 / Don't WA / A.Today's Word
#include <iostream>

using namespace std;

const int MOD = 16;

string getNext(string s) {
    string res;
    for(auto ss : s) {
        res += ss == 'z' ? 'a' : (char)(ss + 1);
    }
    return res;
}

int main() {
    int n, m;
    string s;
    cin >> n >> m >> s;
    string ss = s.substr(s.length() / 2, s.length() / 2);
    int cnt = 0;
    while(true) {
        if(ss.length() >= m) {
            break;
        }
        cnt ++;
        ss = ss + getNext(ss);
    }
    int xx = MOD - (cnt % 26);
    while(xx < 0) {
        xx += 26;
    }
    for(int i = ss.length() - m; i < ss.length(); i++){
        int now = ss[i] + xx;
        if(now > 'z') {
            now -= 26;
        }
        cout << (char)now;
    }
    cout << endl;
    return 0;
}