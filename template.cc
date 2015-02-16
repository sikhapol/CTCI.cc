#include <iostream>
#include <string>

using namespace std;

// Don't modify anything above this line

string Process(string input) {
    // Implement your solution here
    return input;
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
