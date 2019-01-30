// 输入各月图书销售量，并统计输出
// 创建于 2019/01/30

# include <iostream>

int main()
{  
    using namespace std;
    const char * input_tips[12] = {
        "January sales: ",
        "Fabuary sales: ",
        "May sales: ",
        "April sales: ",
        "March sales: ",
        "June sales: ",
        "July sales: ",
        "August sales: ",
        "September sales: ",
        "October sales: ",
        "November sales: ",
        "December sales: "
    };
    int sale[12];  // int数组用于存储十二个月的销售量
    int sale_sum = 0;  // 存储销售量总和
    for (int i = 0; i < 12; i++)  // 循环输入销售量
    {
        cout << input_tips[i];
        cin >> sale[i];
        sale_sum = sale_sum + sale[i];
    }
    cout << "The total sale is " << sale_sum;
    return 0;
}