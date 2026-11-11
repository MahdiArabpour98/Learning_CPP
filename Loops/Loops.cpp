#include <iostream>
using namespace std;


int main()
{
    int num1 = 10;
    while (num1 < 10)
    {
        cout << num1 << "\n";
        num1++;
    }

    int num2 = 20;
    do
    {
        cout << num2 << "\n";
        num2++;
    }
    while (num2 < 30);

    int num3 = 5;
    for (int i = 0; i < num3; i++)
    {
        cout << i << "\n";
    }

    return 0;
}
