// 用于记录捐献的钱
// 创建于 2019/02/06

# include <iostream>
# include <string>

using std::string;
using std::cin;
using std::cout;

struct donater {
    string name;  // 捐献者名字
    double money;  // 捐献数额
};
int display_grand_patrons(donater * p, int elements_num);
int display_patrons(donater * p, int elements_num);
int main()
{
    int donater_num; 
    cout << "How many donater is there ? \n";
    cin >> donater_num;

    donater * p_struct = new donater [donater_num];  // 创建动态数组
    for (int i = 0; i < donater_num; i++)
    {
        cout<< "Enter the "
            << (i + 1)
            << "(th) donater information, first name second money: \n";
        cin >> p_struct[i].name;
        //cout << p_struct[i].name;
        cin >> p_struct[i].money;
        //cout << p_struct[i].money;
    }
    cout << "The input is over.\n";
    cout << "Grand Patrons: \n";
    if (display_grand_patrons(p_struct, donater_num))
        cout << "   None\n";
    cout << "Patrons: \n";
    if (display_patrons(p_struct, donater_num))
        cout << "   None\n";
    return 0;
}

int display_grand_patrons(donater * p, int elements_num)  // 将Grand Patrons打印并返回0，如果没有则返回1
{
    int grand_patron_num = 0;  // 统计Grand Patrons数量
    for (int i = 0; i < elements_num; i++)
    {   
        double money = p[i].money;
        if (money > 10000)
        {
            cout << "   " << p[i].name << " " << p[i].money << '\n';
            grand_patron_num += 1;
            //continue;
        }
    }
    if (grand_patron_num)
        return 0;
    else
        return 1;   // 无Grand Patrons则返回1
}

int display_patrons(donater * p, int elements_num)  // 将Patrons打印并返回0，如果没有则返回1
{
    int patron_num = 0;  // 统计Patrons数量
    for (int i = 0; i < elements_num; i++)
    {
        double money = p[i].money;
        if (money < 10000)
        {
            cout << "   " << p[i].name << " " << p[i].money << '\n';
            patron_num += 1;
            //continue;
        }
    }
    if (patron_num)
        return 0;
    else
        return 1;   // 无Grand Patrons则返回1
}