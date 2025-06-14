#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int maxLen = 1;
    int curLen = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i]==s[i-1]) {
            curLen++;
        } else {
            curLen = 1;
        }


        if (curLen > maxLen) {
            maxLen = curLen;
        }
    }

    cout << maxLen << endl;

    return 0;
}
