#include <iostream>
#include <string>
using namespace std;


void print(string str);
void print(int num);
void print(string str1, string str2);

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    int num = 10;

    print(str1);
    print(num);
    print(str1, str2);

    return 0;
}


void print(string str)
{
    cout << str << "\n";
}

void print(int num)
{
    cout << num << "\n";
}

void print(string str1, string str2)
{
    cout << str1 << " " << str2 << "\n";
}
