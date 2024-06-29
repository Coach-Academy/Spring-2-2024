#include <bits/stdc++.h>

using namespace std;

int main() {
    string time;
    cin >> time;
    if (time.substr(0, 2) == "12") {
        if (time[time.size() - 2] == 'P') {
            cout << 12;
        } else {
            cout << "00";
        }
        cout << time.substr(2, 6) << endl;
    } else {
        if (time[time.size() - 2] == 'P') {
            int hour = stoi(time.substr(0, 2));
            cout << 12 + hour;
        } else {
            int hour = stoi(time.substr(0, 2));
            if (hour < 10)
                cout << 0;
            cout << hour;
        }
        cout << time.substr(2, 6) << endl;
    }
}
