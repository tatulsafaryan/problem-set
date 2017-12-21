#include<iostream>
#include<string>
#include<unordered_map>

bool isPermutation(const std::string& str1, const std::string& str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    else if(str1 == str2) {
        return true;
    }
    std::unordered_map<std::string::value_type, size_t> permutation;
    for (const auto& index : str1) {
        permutation[index]++;
    }
    for (const auto& index : str2) {
        if (permutation[index] == 0) {
            return false;
        }
        permutation[index]--;
    }

    return true;
}

int main() {
    const std::string str1 = " abb aa bb";
    const std::string str2 = "a bab ab ab";
    std::cout<<isPermutation(str1,str2);
    return 0;
}
