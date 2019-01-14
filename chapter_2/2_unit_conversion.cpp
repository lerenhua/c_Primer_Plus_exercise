//2-unit-conversion.cpp --将以浪为单位的数字转换成以码为单位的数字
// 1 (浪) = 220 （码）

#include <iostream>
using namespace std;
int main()
{
    int in_number, out_number;
    cout << "Please input number (the unit is lang): ";
    cin.get();
    cin >> in_number;
    //单位换算
    out_number = in_number * 220;
    cout << endl
        << "the output (the unit is code):"
        << out_number;
    return 0;
}