//显示纬度
//以度，分，秒的形式输入纬度，以度为单位输出纬度
//创建于 2019/01/15

#include <iostream>

int main()
{
    using namespace std;
    const float degree2minute = 60;  // 1度等于60分
    const float minute2second = 60;  // 1分等于60秒
    float degrees, minutes, seconds;
    float display_degrees;
    cout << "Enter a latitude in degrees, minutes, seconds:"
        << endl
        << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    display_degrees = degrees + minutes / degree2minute + seconds / minute2second / degree2minute;  // 计算显示纬度
    cout << degrees
        << " degrees, "
        << minutes
        << " minutes, "
        << seconds
        <<" seconds = "
        << display_degrees
        << " degrees";
    return 0;
}