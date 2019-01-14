// 3-generate-output.cpp --调用自定义函数输出

#include <iostream>
using namespace std;

int print_shtr();
int print_tbm();

int main()
{
    print_tbm();
    print_tbm();
    print_shtr();
    print_shtr();
    return 0;
}

int print_tbm()
{
    cout << "Three blind mice"
        << endl;
    return 0;
}
int print_shtr()
{
    cout << "See how they run"
        << endl;
    return 0;
}