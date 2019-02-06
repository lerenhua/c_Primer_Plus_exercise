// 输入收入，报告所得税
// 创建于 2019/02/05

# include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned long salary;
    unsigned tax;  // 存储所得税
    float per1 = 0.1;  // 5001tvarps - 15000tvarps
    float per2 = 0.15;  // 15001 - 35000tvarps
    float per3 = 0.2;  // 35000tvarps以上

    while (cin >> salary)
    {
        if (salary > 35000)
        {
            tax = 10000 * per1 +  20000 * per2 + (salary - 35000) * per3;
        }
        else if ((salary > 15000) && (salary < 35000))
        {
            tax = 10000 * per1 + (salary - 15000) * per2;
        }
        else if ((salary > 5000) && (salary < 15000))
        {
            tax = (salary - 5000) * per1;
        }
        else tax = 0;

        cout << "Your tax is " << tax << '\n';
    }
    return 0;
}