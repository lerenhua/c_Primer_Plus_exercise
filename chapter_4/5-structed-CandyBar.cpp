// 声明结构体 CandyBar
// 创建于 2019/01/19

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct CandyBar  // 声明结构体CandyBar
    {
        string brand;
        float weight;
        int calories;
    };
    CandyBar snack = {"Mocha Munch", 2.3, 350};  // 创建snack的CandyBar变量

    cout << "the brand name is "
        << snack.brand
        << endl
        << "the weight is "
        << snack.weight
        << endl
        << "the calories are "
        << snack.calories;
    return 0;
}