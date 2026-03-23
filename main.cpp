#include <iostream>
#include "calc.h"
using namespace std;

void welcome() {
    cout << "===== CMake 完整版计算器 =====" << endl;
}

int main() {
    welcome();
    cout << "请输入两个数字：" << endl;
    int a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << add(a, b) << endl;
    cout << a << " - " << b << " = " << sub(a, b) << endl;
    cout << a << " * " << b << " = " << mul(a, b) << endl;
    cout << a << " / " << b << " = " << div1(a, b) << endl;

    cout << "\n项目运行成功！" << endl;
    return 0;
}