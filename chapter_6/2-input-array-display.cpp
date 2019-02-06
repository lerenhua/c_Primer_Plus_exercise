// 将数字读入数组并显示平均值及数组中多少个数字大于平均值
// 创建于 2019/02/04

# include <iostream>
# include <cctype>
# include <ctime>

using std::cin;
using std::cout;
using std::isdigit;

int main()
{
    time_t start_time = time(NULL);  // 程序开始时间
    double donations[10];
    int loops_num = 0;

    while ((loops_num < 10) && (cin >> donations[loops_num]))  // 限制最大循环次数为10，并且非数字输入退出循环
    {
        loops_num++;
    }

    double average = 0;
    for (int i = 0; i < loops_num; i++)  // 求数组已输入的平均值
    {
        average = average + donations[i];
    }
    average /= loops_num;

    int bigger_ave_num = 0;
    for (int i = 0; i < loops_num; i++)
    {
        if (donations[i] > average)  // 统计多少数字大于平均值
            bigger_ave_num++;
    }

    cout << "The average of the total number is "   // 报告输出
        << average
        << '\n'
        << "There is "
        << bigger_ave_num
        << " bigger than average\n";
    
    cout << "The program costs "
        << time(NULL) - start_time
        << " (s)\n";

    return 0;
}