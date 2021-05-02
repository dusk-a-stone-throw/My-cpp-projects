#include <iostream>
#include <string>
using namespace std;
// указатель на функцию
string data() {
    cout << "ddd" << endl;
    return "data...";
}
string server() {
    return "server data...";
} 
string show(string (*foo)()) {
    foo();
}
int main() {
    string python;
    cin >> python;
    cout << python << endl;
    show(data);
    return 0;
}