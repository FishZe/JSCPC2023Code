// JSCPC 2023 / Don't WA / K.Similarity (Hard Version)
#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if(m >= k) {
        cout << "No" << endl;
        return 0;
    }
    if(m == 0) {
        if(n > 26) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < k; j++) {
                    cout << (char)('a' + i);
                }
                cout << endl;
            }
        }
        return 0;
    }
    cout << "Yes" << endl;
    for(int i = 0; i < k; i++) {
        cout << 'a';
    }
    cout << endl;
    for(int i = 0; i < m; i++) {
        cout << 'a';
    }
    for(int i = m; i < k; i++) {
        cout << 'b';
    }
    cout << endl;
    int cnt = 2;
    for(int i = 0 ; i < 24; i++) {
        for(int j = i; j < 24; j++){
            if(cnt == n) {
                return 0;
            }
            cnt ++;
            string now;
            now += (char)(i + 'c');
            now += (char)(j + 'c');
            for(int p = 0; p < k / 2; p++){
                cout << now;
            }
            if(k % 2 == 1) {
                cout << now[0];
            }
            cout << endl;
        }
    }
    return 0;
}
