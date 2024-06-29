#include <bits/stdc++.h>

using namespace std;

bool isEqual(int index[], int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (index[i] != arr[i])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int p[n], q[n], index[n];
    for (int i = 0; i < n; ++i) {
        index[i] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }
    int posP = -1, posQ = -1, i = 0;
    do {
        if (isEqual(index, p, n))
            posP = i;
        if (isEqual(index, q, n))
            posQ = i;
        i++;
    } while (next_permutation(index, index + n));
    cout << abs(posP - posQ) << endl;

}
