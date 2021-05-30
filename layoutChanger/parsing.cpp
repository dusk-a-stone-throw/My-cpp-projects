#include <string>

std::string parsing(std::string phrase) {
    std::string temp;
    for(int i = 0; i < phrase.size(); i++) {
        if(phrase[i] == 'z') {
            temp[i] = 'я';
        }
    }
    return temp;
}
