/*Problem #1
Write a program to print your name on screen*/

#include <iostream>
#include <string>

using namespace std;

void PrintName(const string& Name)
{   
    cout << "\nMy name is " << Name << endl;
}
int main()
{
    PrintName("AYYOUB");

    return 0;
}
