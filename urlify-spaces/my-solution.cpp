#include<iostream>
#include<string>

std::string urlifySpace(std::string& str) {
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == ' ') {
            str.replace(i,1,"%20");
        }
    }
    return str;
}
int main() {
    std::string str = "asd sd sdsd sdsd    sdsd";
    std::cout<<urlifySpace(str);
    return 0;
}
