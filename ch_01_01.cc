#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool IsAllUniqueChars(string s) {
    if (s.size() == 0) {
        return false;
    }

    sort(s.begin(), s.end());

    char k = 0;
    for (char c: s) {
        if (k >= c) {
            return false;
        }
        k = c;
    }

    return true;
}

string Process(string input) {
    return IsAllUniqueChars(input) ? "YES" : "NO";
}

int main(int argc, char **argv) {
    string line;
    while (getline(cin, line)) {
        cout << "input:  " << line << endl;
        string result = Process(line);
        cout << "output: " << result << endl;
    }

    return 0;
}
