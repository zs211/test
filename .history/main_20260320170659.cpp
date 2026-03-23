#include <iostream>
#include "calc.h"
using namespace std;

void welcome() {
    cout << "===== CMake 计算器项目 =====" << endl;
}

int main() {
    welcome();

    int a = 20, b = 10;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << a << " - " << b << " = " << sub(a, b) << endl;

    cout << "项目运行成功！" << endl;
    return 0;
}