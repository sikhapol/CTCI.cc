#include <cstring>
#include <iostream>
#include <string>

using namespace std;

void Reverse(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        ++i;
        --j;
    }
}

string Process(string input) {
    char *str = new char[input.size() + 1];
    strcpy(str, input.c_str());
    Reverse(str);
    string result(str);
    delete[] str;
    return result;
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
