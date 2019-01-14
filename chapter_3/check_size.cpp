//用于测试代码运行等功能

#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;

    //sizeof操作生成变量字节大小
    cout << "int is "
         << sizeof(int)
         << "bytes"
         << endl;
    cout << "short is "
         << sizeof(short)
         << "bytes"
         << endl;
    cout << "long is "
         << sizeof(long)
         << "bytes"
         << endl;
    cout << "char is"
         << sizeof(char)
         << "bytes"
         << endl;
    cout << "double is "
         << sizeof(double)
         << "bytes"
         << endl;
    cout << "long double"
         << sizeof(long double)
         << "bytes"
         << endl;
    cout << '$';
    return 0;
}
