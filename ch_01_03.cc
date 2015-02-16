#include <iostream>
#include <map>
#include <string>

using namespace std;

// Don't modify anything above this line

string Process(string input) {
    // Split string
    string s1 = input.substr(0, input.find(" "));
    string s2 = input.substr(input.find(" " ) + 1);

    if (s1.size() != s2.size()) {
        return "NO";
    }

    map<char, int> recurrence_map;

    for (char c: s1) {
        ++recurrence_map[c];
    }

    for (char c: s2) {
        --recurrence_map[c];
    }

    bool is_permutation = true;
    for (auto it: recurrence_map) {
        is_permutation &= it.second == 0;
    }

    return is_permutation ? "YES" : "NO";
}

// Don't modify anything below this line

int main(int argc, char **argv) {
    string line;
    while (getline(cin, line)) {
        cout << "input:  " << line << endl;
        string result = Process(line);
        cout << "output: " << result << endl;
    }

    return 0;
}
