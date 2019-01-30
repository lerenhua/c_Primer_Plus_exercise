// 计算多少年后，Cleo的投资价值才能超过Daphne的投资价值
// 创建于 2019/01/30

# include <iostream>

int main()
{
    using namespace std;
    int D_value = 100, C_value = 100;  // 声明Daphne及Cleo投资价值变量
    double D_factor = 0.1, C_factor = 0.05;  // 声明利率
    int year = 0;  // 用于记录年数

    do
    {
        year++;
        D_value = D_value + D_factor * 100;  // 计算Daphne的投资价值
        C_value = C_value * (1 + C_factor);  // 计算Cleo投资价值
    } while (C_value < D_value);  // 如果Cleo的投资价值超过Daphne的投资价值则退出循环

    cout << year  
        << " later, the investment value of Cleo is more than Daphne."
        << endl
        << "The investment value of Cleo is "
        << C_value
        << endl
        << "The investment value of Daphne is "
        << D_value;
    return 0;
    
}