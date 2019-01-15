//将以英寸为单位的身高转换成英尺和英寸
//创建于 2019/1/1

#include <iostream>

int main()
{
    using namespace std;
    const double conver_factor = 0.0833333;
    cout << "Please enter your height : "
        << "_____\b\b\b\b\b";
    //接受输入的身高，单位为英寸
    int height_inch;
    cin >> height_inch; 
    double height_feet;
    // 1 (英寸) = 0.083333333（英尺） 
    height_feet = conver_factor * height_inch;
    cout << "Your height is :"
        << height_feet
        << " (feet)";
    return 0;
}