#include <iostream>
using namespace std;
#define TOTAL_QUESTIONS 10
int main() {
    int studentsCount;
    int badMarksCount = 0;
    bool isSolvedAll;
    cin >> studentsCount;
    for(int i = 0; i < studentsCount; i++) {
        int answeredQuestions;
        cin >> answeredQuestions;
        if(answeredQuestions < TOTAL_QUESTIONS / 2) {
            badMarksCount++;
        }
        else if(answeredQuestions == TOTAL_QUESTIONS) {
            isSolvedAll = true;
        }
    }
    cout << badMarksCount << endl;
    if(isSolvedAll) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
