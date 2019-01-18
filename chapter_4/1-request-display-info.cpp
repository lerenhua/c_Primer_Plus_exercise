// 显示信息
// 创建于 2019/01/17

#include <iostream>
#include <string>  // 使string类可用
int main()
{
    using namespace std;
    string first_name, last_name;  // 声明string类
    char grade;  // 声明字符变量 grade
    int age;  // 声明int 变量 age
    
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What your last name?";
    cin >> last_name;

    cout << "What letter grade do you deserve ?";
    cin >> grade;

    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " 
        << last_name
        << ", "
        << first_name
        << endl;
    grade = grade + 1;
    cout << "Grade: "
        << grade
        << endl;
    cout << "Age: "
        << age;
    return 0;
}
