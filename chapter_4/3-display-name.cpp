// 依次输入名和姓，然后显示。
// 其中使用c-style字符串
// 创建于 2019/01/18

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char first_name[10];  // 声明char数组变量
    char last_name[20];   // 声明char数组变量，数组长度要长一些

    cout << "Enter your first name: ";
    cin >> first_name;  //获取输入的first name
    cout << "Enter your last name: ";
    cin >> last_name;  // 获取输入的last name

    strcat(last_name, ", ");         // strcat 函数是将源字符串拼接到目标字符串尾部，因此目标字符串应该足够长。
    strcat(last_name, first_name);

    cout << "Here\'s the information in a single string: "
        << last_name;
    return 0;
}