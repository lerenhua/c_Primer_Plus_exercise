#include <iostream>
#include <cfloat>
int main()
{
    using namespace std;
    int int_try = -2147483647;
    
    cout << int_try - 2
        << endl;
    cout << double(int_try);
    return 0;
}