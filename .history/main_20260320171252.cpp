#include <iostream>
#include "calc.h"
using namespace std;

void welcome() {
    cout << "===== CMake 完整版计算器 =====" << endl;
}

int main() {
    welcome();

    int a = 20, b = 10;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << a << " - " << b << " = " << sub(a, b) << endl;
    cout << a << " * " << b << " = " << mul(a, b) << endl;
    cout << a << " / " << b << " = " << div(a, b) << endl;

    cout << "\n项目运行成功！" << endl;
    return 0;
}