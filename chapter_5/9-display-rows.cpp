// 打印星号
// 创建于 2019/02/03

# include <iostream>

using std::cout;
using std::cin;

void print_symbol(int dot_num, int star_num);
int main()
{
    int loop_num;  // 循环次数

    cout << "Enter number of rows: ";
    cin >> loop_num;

    for (int j = 1; j < loop_num + 1; j++)
    {
        print_symbol(loop_num - j, j);
    }
    return 0;
}

void print_symbol(int dot_num, int star_num)  // dot_num 句点数量；star_num 星点数量
{
    for (int i = 0; i < dot_num; i++)
    {
        cout << '.';
    }
    for (int i = 0; i < star_num; i++)
    {
        cout << '*';
    }
    cout << '\n';
}