#include <iostream>
using namespace std;

int main()
{
    // std::cout << "Hello, C++!\n";
    cout << "Hello, C++!" << endl;

    // system("pause");

    int a;
    a = 3;

    char b;
    b = 'a';

    float c;
    c = 3.14;

    cout << a << "\n" << b << "\n" << c << endl;


    int d = 4;

    int e(5);

    if (a > d)
    {
        cout << "a greather than d";
    }
    else if (a > e)
    {
        cout << "a greather than e";
    }
    else
    {
        cout << "a less than d,e";
    }

    return 0;
}
