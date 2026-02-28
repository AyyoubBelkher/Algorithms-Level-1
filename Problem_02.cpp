/*
Problem #2
Write a program to ask the use to enter his/her name and
print it on screen.*/

#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string Name = "";

    cout << "\nPlease enter your Name?" << endl;
    getline(cin, Name);

    return Name;
}

void PrintName(const string& Name)
{   
    cout << "\nMy name is " << Name << endl;
}
int main()
{
    PrintName(ReadName());

    return 0;
}