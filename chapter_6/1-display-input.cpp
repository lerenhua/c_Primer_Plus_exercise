// 读取输入并回显，大写转小写，小写转大写，数字去除
// 创建于 2019/02/04

# include <iostream>
# include <cctype>
using std::cin;
using std::cout;
using std::isdigit;
using std::isupper;
using std::islower;
using std::isalpha;
using std::tolower;
using std::toupper;

int main()
{
    char ch;  // 接收输入字符
    cout << "Enter the string: ";
    while (1)
    {
        ch = cin.get();
        if (isdigit(ch))  
            continue;  // 如果是数字则读取下一个字符
        else if (!isalpha(ch))   
        {
            if (ch == '@')
                break;  // 如果输入字符为@结束字符，退出程序
            cout << ch;  // 如果不是英文字符，则直接回显
            continue;
        }
        else if (islower(ch))
        {
            ch = toupper(ch);  // 将小写变大写
            cout << ch;
            continue;
        }
        else
        {
            ch = tolower(ch);  // 将大写变成小写
            cout << ch;
            continue;
        }
    }

    return 0;
}