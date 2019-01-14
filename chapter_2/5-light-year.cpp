// 将光年单位数值转换成天文单位数字
//1 （光年） = 63240 （天文单位）
//2018年12月25日创建

#include <iostream>

double calculate_light_year(double);
int main()
{
    using namespace std;
    double light_year;
    double units;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    units = calculate_light_year(light_year);
    cout << light_year
        << "light years = "
        << units
        << "astronomical units";
    return 0;
}

// 将光年数字转换成天文单位数字
double calculate_light_year(double light_year)
{
    double units;
    units = light_year * 63240;
    return units;
}