// 将摄氏温度转换成华氏温度
//公式： 华氏温度 = 1.8 * 摄氏温度 + 32.0

#include <iostream>

int degree_celsius_to_fahrenheit(int);

int main()
{
    using namespace std;
    int celsius;
    int fahrenheit;
    cout << "Please enter a Celsius value: ";
    cin.get();
    cin >> celsius;
    fahrenheit = degree_celsius_to_fahrenheit(celsius);
    cout << celsius
        << "degrees Celsius is "
        << fahrenheit
        << "degrees Fahrenheit";
    return 0;
}

//摄氏温度换算华氏温度
int degree_celsius_to_fahrenheit(int degree_celsius)
{
    int degree_fahrenheit;
    degree_fahrenheit = 1.8 * degree_celsius + 32.0;
    return degree_fahrenheit;
}