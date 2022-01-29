#include <iostream>
using namespace std;
int main() {
    int answeredQuestions;
    int studentsCount;
    int bestRecord = -1;
    bool isLooser  = false;
    cin >> studentsCount;
    for(int i = 0; i < studentsCount; i++) {
        cin >> answeredQuestions;
        if(answeredQuestions == 0) {
            isLooser = true;
        }
        if(answeredQuestions > bestRecord) {
            bestRecord = answeredQuestions;
        }
    }
    cout << bestRecord << endl;
    if(isLooser) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
