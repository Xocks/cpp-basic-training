#include <iostream>
#include <cmath> // 需要包含这个头文件

int main() {
    double number = 1.23456;
    
    // 使用round函数四舍五入到两位小数
    double rounded = round(number * 100) / 100;
    
    std::cout << "原始数字: " << number << std::endl;
    std::cout << "四舍五入后的数字: " << rounded << std::endl;
    
    return 0;
}
