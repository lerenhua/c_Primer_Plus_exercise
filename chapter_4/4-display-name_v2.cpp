// // 依次输入名和姓，然后显示。
// 其中使用string类字符串
// 创建于 2019/01/18

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string first_name;  
    string last_name;   

    cout << "Enter your first name: ";
    cin >> first_name;  //获取输入的first name
    cout << "Enter your last name: ";
    cin >> last_name;  // 获取输入的last name

    last_name = last_name + ", " + first_name;  // 使用 + 直接拼接

    cout << "Here\'s the information in a single string: "
        << last_name;
    return 0;
}