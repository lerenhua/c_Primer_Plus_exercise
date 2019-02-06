// BOP成员信息展示程序
// 创建于 2019/02/05

# include <iostream>
using std::cin;
using std::cout;
const int strsize = 10;  // 设置字符串最大长度
struct bop
{
    char fullname[strsize];  // 真实姓名
    char title[strsize];   // 工作头衔
    char bopname[strsize];  // 秘密姓名
    int preference;   // 成员偏好：0 表示真实姓名，1 表示头衔，2 表示秘密姓名
};

int main()  // 主函数
{
    bop bopers[4] = {
        {"Man sad", "doctor", "Anmd ds", 1},
        {"Man hhad", "doc", "Cnmd ds", 1},
        {"Ma sfgdd", "octor", "Bmm ds", 0},
        {"Man s", "or", "Dnmd ds", 2},
    };  // 4元素的数组

    // 输出提示信息
    cout<< "a. display by name     b. display by title\n"             
        << "c. display by bopname  d. display by perference\n"
        << "q. quit\n";  

    char ch;  // 接收输入字符
    while (1)
    {
        cout << "Enter your choice: ";
        //ch = cin.get();  调用此函数会将换行符\n读入
        cin >> ch;
        switch (ch)
        {
            case ('a'): break;
            case ('b'): break;
            case ('c'): break;
            case ('d'): break;
            case ('q'): cout << "Bye!";
                exit(0);  // 退出程序
        }
    } 
    return 0; 
}
