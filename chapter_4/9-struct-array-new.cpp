// 使用new为结构数组分配内存，而不是声明变量
// 创建于 2019/01/20

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct CandyBar
    {
        string brand_name;
        float weight;
        int calories;
    };  //定义结构体类型CandyBar
    CandyBar * p_candy = new CandyBar [3];  // 使用new为结构数组分配内存

    (p_candy)[0] = {"Mocha Munch", 2.3, 350};
    (p_candy)[1] = {"Mocha Munch", 2.3, 350};
    (p_candy)[2] = {"Mocha Munch", 2.3, 350};

    cout << "the brand name is "  // 注意指针就可以代表数组名，二者等价
        << (p_candy)[1].brand_name
        << endl
        << "the weight is "
        << (p_candy)[1].weight
        << endl
        << "the calories are "
        << (p_candy)[1].calories;
    
    delete [] p_candy;  // 使用delete释放内存
    return 0;
}