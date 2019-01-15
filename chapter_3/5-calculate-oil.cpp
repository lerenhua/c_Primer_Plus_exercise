// 计算每100公里耗油量
// 创建于 2019/01/15

#include <iostream>

int main ()
{
    using namespace std;
    float km, oil_L, L_per_100km;
    cout << "Enter the kilometer: ";
    cin >> km;
    cout << "Enter the oil (L): ";
    cin >> oil_L;
    L_per_100km = (oil_L / km) * 100;
    cout << "The consumption per 100 km is : "
        << L_per_100km
        << " (L)";
    return 0;
}