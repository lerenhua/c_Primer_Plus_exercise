// 显示时间
// 输入秒数，然后以天，小时，分钟，秒的方式显示时间
// 创建于 2019/01/15

#include <iostream>

int main()
{
    using namespace std;
    const int day2hours = 24;  //一天24小时
    const int hour2minutes = 60;  //一小时60分钟
    const int minute2seconds = 60;  //一分钟60秒
    long input_seconds;
    int display_days, display_hours, display_minutes, display_seconds;

  
    cout << "Enter the number of seconds: ";
    cin >> input_seconds;

    //计算显示时间
    display_days = input_seconds / (day2hours * hour2minutes * minute2seconds);
    display_hours = (input_seconds % (day2hours * hour2minutes * minute2seconds)) / (hour2minutes * minute2seconds);
    display_minutes = ((input_seconds % (day2hours * hour2minutes * minute2seconds)) % (hour2minutes * minute2seconds)) / minute2seconds;
    display_seconds = ((input_seconds % (day2hours * hour2minutes * minute2seconds)) % (hour2minutes * minute2seconds)) % minute2seconds;

    cout << input_seconds
        << " seconds = "
        << display_days
        << " days, "
        << display_hours
        << " hours, "
        << display_minutes
        << " minutes, "
        << display_seconds
        << " seconds";
    return 0;
}