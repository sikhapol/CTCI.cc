#include <cstring>
#include <iostream>
#include <string>

using namespace std;

// Don't modify anything above this line

string Process(string input) {
    int number_of_spaces = 0;
    for (char c: input) {
        if (c == ' ') {
            ++number_of_spaces;
        }
    }

    int new_string_size = input.size() + 1 + number_of_spaces*2;
    char *str = new char[new_string_size];
    str[new_string_size-1] = '\0';
    strcpy(str, input.c_str());

    int i = input.size() - 1;
    int j = new_string_size - 2;

    while (i >= 0) {
        if (str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '2';
            str[j--] = '%';
            --i;
        } else {
            str[j--] = str[i--];
        }
    }

    return string(str);
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
