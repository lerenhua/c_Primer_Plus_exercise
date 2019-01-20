// 使用new为结构体分配内存
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
    pizza * p_struct = new pizza ;  // 使用new为结构体分配内存,需要事先定义结构体变量
    string company_name;
    float diameter, weight;

    cout << "Enter the diameter of pizza: ";
    cin >> diameter;
    cout << "Enter the name of company: ";
    cin >> company_name;
    cout << "Enter the weight of pizza: ";
    cin >> weight;

    *p_struct = {company_name, diameter, weight};
    cout << "The name of pizza company: " 
        << (*p_struct).company_name
        << endl
        << "The diameter of pizza: "
        << (*p_struct).diameter
        << endl
        << "The weight of pizza: "
        << (*p_struct).weight;
    delete p_struct;  // 释放内存
    return 0;
}