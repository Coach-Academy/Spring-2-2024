#include <bits/stdc++.h>

using namespace std;

void push(deque<int> &dq, int n, string s, bool rev) {
    if (s == "toFront") {
        if (rev == false)
            dq.push_front(n);
        else
            dq.push_back(n);
    }
    if (s == "push_back") {
        if (rev == false)
            dq.push_back(n);
        else
            dq.push_front(n);
    }
}

int pop(deque<int> &dq, string s, bool rev) {
    if (s == "front") {
        if (rev == false) {
            int num = dq.front();
            dq.pop_front();
            return num;
        } else {
            int num = dq.back();
            dq.pop_back();
            return num;
        }
    }
    if (s == "back") {
        if (rev == false) {
            int num = dq.back();
            dq.pop_back();
            return num;
        } else {
            int num = dq.front();
            dq.pop_front();
            return num;
        }
    }
}


int main() {
    int q;
    cin >> q;
    deque<int> dq;
    bool rev = false;
    while (q--) {
        string s;
        cin >> s;
        if (s == "back") {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
                cout << pop(dq, s, rev) << endl;
        } else if (s == "front") {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
                cout << pop(dq, s, rev) << endl;
        } else if (s == "push_back") {
            int n;
            cin >> n;
            push(dq, n, s, rev);
        } else if (s == "toFront") {
            int n;
            cin >> n;
            push(dq, n, s, rev);
        } else {
            rev = !rev;
        }
    }
}
