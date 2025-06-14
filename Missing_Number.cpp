#include<iostream>
using namespace std;

int main(){
    long long n, x, sum = 0;
    cin >> n;

    for(long long i = 0; i < n - 1; i++){
        cin >> x;
        sum += x;
    }

    long long total = n * (n + 1) / 2;
    cout << total - sum << endl;

    return 0;
}
