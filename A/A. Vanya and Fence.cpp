#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n, h;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= h) {
            count++;
        }
        else if (a[i] > h) {
            count = count + 2;
        }
    }
    cout << count;

    return 0;
}
