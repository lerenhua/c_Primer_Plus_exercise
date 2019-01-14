//显示名字及地址
#include <iostream>

using namespace std;   //要使用命名空间预编译
int main()
{
    string name;
    string address;
    //cin.get();
    //cout << "请输入你的名字";  使用中文输出已出现乱码
    //注意！！！
    //第一次调用cin.get()时会将输入的字符串第一个字符去掉
    //当之后再次调用cin.get()时就正常显示
    //不知道这是什么问题！！
    cout << "please input your name: ";  
    cin.get();
    cin >> name;
    //cout << name;
    cout << "please input your address: ";
    cin.get();
    cin >> address;
    cout << endl 
        << "Your name: " 
        << name
        << endl;
    cout << endl
        << "Your address :"
        << address;
    //以下只会停顿一次？
    cin.get();
    cin.get();
    return 0;
}