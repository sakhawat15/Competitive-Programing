#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++") {
            c++;
        } else if (s == "--X" || s == "X--") {
            c--;
        }
    }
    cout << c << endl;
}
