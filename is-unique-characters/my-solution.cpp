#include <iostream>
#include <string>
#include <set>

bool isUnique (const std::string& str) {
    if(str.length() <= 1)
        return true;
    std::set<char> set_str;
    for(int i = 0; i < str.length(); ++i) {
        set_str.insert(str[i]);
    }
    if(set_str.size() == str.length()) {
        return true;
    }
    return false;
}

int main() {
    const std::string str = "asdfgha";
    std::cout<<isUnique(str);
    return 0;
}
