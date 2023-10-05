#include <iostream>

using namespace std;

int main() {
    int n;
    int k;
    int long long result = 1;
    int long long factor = 1;
    cin >> n;
    cin >> k;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; i++) {
        int mod = 1000000005;
        result = (result * (n - i)) % 1000000007;
        factor = i + 1;
        while (mod != 0) {
            if (mod % 2 == 0) {
                mod = mod / 2;
                factor = (factor % 1000000007 * factor % 1000000007) % 1000000007;
            } else {
                mod = mod - 1;
                result = ( result % 1000000007 * factor % 1000000007) % 1000000007;
            }
        }
    }
    cout << result << endl;
    return 0;
}