#include <iostream>

using namespace std;

enum Air { Reflection = 100, Aqua = 60, Prima = 30, Fiji = 50 };

int main()
{
    Air y = Air::Reflection;
    cout << y << endl;
    return 0;
}
