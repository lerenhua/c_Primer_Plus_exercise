//显示小时数和分钟数
//创建于 2018/12/30

#include <iostream>

void display_time(int, int);

int main()
{
    using namespace std;
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of  minutes: ";
    cin >> minute;
    display_time(hour, minute);
    return 0;
}

// 显示小时数和分钟数
void display_time(int hour, int minute)
{
    using namespace std;
    cout << "Time: "
        << hour
        << ':'
        << minute
        << endl;
}

