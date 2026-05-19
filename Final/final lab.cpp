#include <iostream>
using namespace std;


void check(string s) {
    int i = 0;

    while (i < s.length()) {
        if (s[i] != 'a') {
            cout << "Rejected"<<endl;
            return;
        }
        i++;
    }

    cout << "Accepted"<<endl;
}




void Problem2(string s) {

    if (s.length() == 1) {
        if (s[0] == 'a' || s[0] == 'b') {
            cout << "Accepted"<<endl;
            return;
        }
    }

    cout << "Rejected"<<endl;
}




void Problem3(string s) {
    int i = 0;

    while (i < s.length()) {
        if (s[i] != 'a' && s[i] != 'b') {
            cout << "Rejected"<<endl;
            return;
        }
        i++;
    }

    cout << "Accepted"<<endl;
}


int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    check(s);
    Problem2(s);
    Problem3(s);

    return 0;
}
