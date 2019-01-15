//计算BMI指数
//创建于 2019/01/14

#include <iostream>

int main()
{
    using namespace std;
    const int foot_to_inch_factor = 12; //定义英尺转换成英寸的转换因子
    const float inch_to_meter_factor = 0.0254;  //定义英寸转换成米的转换因子
    int input_foot, input_inch, display_inch;
    float meter;
    //以几英尺几英寸接受输入，再转换成英尺显示
    cout << "Please input your height with inch and foot."
        << endl
        << "the foot is ";
    cin >> input_foot;
    cout << "the inch is ";
    cin >> input_inch;
    display_inch = input_foot * foot_to_inch_factor + input_inch;
    meter = display_inch * inch_to_meter_factor;  //将英寸转换成米
    cout << "Your height (inch) :"
        << display_inch
        << endl;
    
    const float pound_to_kg_factor = 2.2;  //定义磅转换成千克的转换因子
    int pound;
    float kilogram;
    cout << "Please input your weight with pound: ";
    cin >> pound;
    kilogram = pound * pound_to_kg_factor;

    //输出BMI指数结果
    float BMI;
    BMI = kilogram / (meter * meter);
    cout << endl
        << "Your BMI : "
        << BMI
        << endl;
    return 0;
}