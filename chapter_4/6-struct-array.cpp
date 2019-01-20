// 使用结构数组
// 创建于 2019/01/20

#include <iostream>
#include <string>
int main()
{
    using namespace std;
    struct Candybar  //定义结构体CandyBar类型
    {
        string brand_name;
        float weight;
        int calories;
    };
    Candybar candybars[3];  // 声明三个元素的CandyBar数组
    candybars[0] = {"Mocha Munch", 2.3, 350};
    candybars[1] = {"Mocha Munch", 2.3, 350};
    candybars[2] = {"Mocha Munch", 2.3, 350};
    cout << "the brand name is "
        << candybars[1].brand_name
        << endl
        << "the weight is "
        << candybars[1].weight
        << endl
        << "the calories are "
        << candybars[1].calories;
    return 0;
}