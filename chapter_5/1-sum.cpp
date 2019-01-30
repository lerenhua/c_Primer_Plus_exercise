// 计算两个整数之间的数之和
// 创建于 2019/01/23

# include <iostream>

int main()
{
    using namespace std;
    int first_num, last_num;
    cout << "Calculate the sum of the two number" << endl;
    cout << "Enter the fisrt number: ";
    cin >> first_num;
    cout << "Enter the last number: ";
    cin >> last_num;

    int sum = 0;
    for (int i = first_num; i < last_num + 1; i++)
    {
        sum = sum + i;
    }
    cout << "The sum is "
        << sum;
    return 0;
}