#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isAllUniqueChars(std::string s) {

    if (s.size() == 0) {
        return false;
    }

    std::sort(s.begin(), s.end());

    char k = 0;
    for (char c: s) {
        if (k >= c) {
            return false;
        }
        k = c;
    }
    return true;
}

int main(int argc, char **argv) {

    std::vector<std::string> ss;
    ss.push_back("qwertyuiopasdfghjklzxcvbnm");
    ss.push_back("thisshouldhavesomuchduplicate");
    ss.push_back("quickbrownfx");
    
    for (std::string s: ss) {
        std::cout << s << ": " << (isAllUniqueChars(s) ? "YES" : "NO") << std::endl;
    }

    return 0;
}