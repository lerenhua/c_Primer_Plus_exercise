// 接收输入数字的程序，并报告输入的累计和
// 创建于 2019/01/25

# include <iostream>

int main()
{
    using namespace std;
    char ch;  // 用于接收输入字符
    int sum;  // 用于存储累计和

    while (1)  // 进入大循环，使程序一直运行
    {   
        sum = 0;
        cout << "Enter a series of number, or enter the number 0 to exit program." << endl;
        ch = cin.get();
        if (ch == '0')  // 进一步判断是否退出程序
        {
            ch = cin.get();
            if (ch == '\n')  break;  // 排除0为数字开头，程序结束
        }
        while (ch != '\n')
        {
            sum = sum + int (ch);  // 求累计和
            ch = cin.get();  // 获取下一个数字
        }
        cout << "The sum of the series number is " << sum << endl;
    }
    cout << "Exit the program !";
    return 0;
}