#include <iostream>
using namespace std;

int div(int a, int b) {
    if (b == 0) {
        cout << "错误：除数不能为0！" << endl;
        return 0;
    }
    return a / b;
}