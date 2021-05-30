// #pragma once
#include <string>
std::string parsing(std::string phrase) {
    std::string temp;
    for(int i = 0; i < phrase.size(); i++) {
        if(phrase[i] == 'z') {
            temp.push_back('я');
        }
    }
    return temp;
}
