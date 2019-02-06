// 菜单驱动程序雏形
// 创建于 2019/02/04

# include <iostream>
# include <cstdlib>
using std::cin;
using std::cout;

int main()
{
    cout << "Please enter one of the following choices: \n"
        << "c) carnivore    p) pianist \n"
        << "t) tree         g) game \n"
        << "f\n";
    
    char ch; 
    while (1)
    {   
        cout << "Please enter c, p, t, or g: ";
        cin >> ch;
        switch (ch)
        {
            case 'c': break;
            case 'p': break;
            case 't': cout << "A maple is a tree"; 
                exit(0);
                break;
            case 'g': break;
            default: continue;
        }
    }
    
    return 0;
}