#include <iostream>
#include <string>
using namespace std;


void printStr(string str);
void concatStr(string& str1, string str2);

int main()
{
    string name = "Mohammad";
    concatStr(name, "Ali");
    printStr(name);

    return 0;
}

void printStr(string str)
{
    cout << str << "\n";
}

void concatStr(string& str1, string str2)
{
    str1.append(" " + str2);
}
