#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    while (n--) {
        int a, s, d;
        cin >> a >> s >> d;

        int sum = a + s + d;

        if (sum >= 2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}