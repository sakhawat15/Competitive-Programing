#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[15];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int i = 0;
        int used = 0;

        while (i < n) {
            if (a[i] == 0) {
                i++;
            } else {
                if (used == 0) {
                    i += x;
                    used = 1;
                } else {
                    break;
                }
            }
        }

        if (i >= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
