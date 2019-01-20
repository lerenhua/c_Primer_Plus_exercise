// 使用结构化数据记录pizza信息
// 创建于 2019/01/19

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    struct pizza  // 声明pizza结构体
    {
        string company_name;  //pizza公司名称
        float diameter;  // pizza饼直径
        float weight; // pizza重量
    };
    string company_name;
    float diameter, weight;

    cout << "Enter the name of pizza company: ";
    cin >> company_name;
    cout << "Enter the diameter of pizza: ";
    cin >> diameter;
    cout << "Enter the weight of pizza: ";
    cin >> weight;

    pizza pizza_info = {company_name, diameter, weight};
    cout << "The name of pizza company: " 
        << pizza_info.company_name
        << endl
        << "The diameter of pizza: "
        << pizza_info.diameter
        << endl
        << "The weight of pizza: "
        << pizza_info.weight;
    
    return 0;
}