#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    cin >> c;
    if (!(c != 'a' and c != 'e' and c != 'o' and c != 'i' and c != 'u')) {
        cout << "vowel\n";
    } else
        cout << "consonant\n";
}
