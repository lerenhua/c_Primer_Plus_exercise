// 修改程序清单，使用string类替换char
// 创建于 2019/01/18

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name, dessert;
    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;

    cout << "I have some delicious "
        << dessert
        << " for you, "
        << name
        << ".\n";
    
    return 0;
}