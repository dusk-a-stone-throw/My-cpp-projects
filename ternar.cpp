#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int add(int, int);
int subtract(int, int);
int main() {
    int a = 10;
    int b = 5;
    int result;
    int (*operation)(int a, int b);
    operation = add;
    result = operation(a, b);
    // result = (*operation)(a, b); // альтернативный вариант
    std::cout << "result=" << result << std::endl;     // result=15
      
    operation = subtract;
    result = operation(a, b);
    std::cout << "result=" << result << std::endl;     // result=5
      
    system("pause");
    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
