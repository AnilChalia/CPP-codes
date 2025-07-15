#include<bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (prime[i] == true) {
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    return prime;
}

int main() {
    int n = 45;
    vector<bool> solve = Sieve(n);

    for (int i = 0; i <= n; i++) {
        if (solve[i]) {
            cout << i << " ";
        }
    }

    return 0;
}
