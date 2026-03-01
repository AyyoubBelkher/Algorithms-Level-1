/*
Problem #3
Write a program to ask the user to enter a number, then
Print
“ODD”
if its odd, Or
“Even”
if its even.*/

#include <iostream>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
    int num = 0;
    cout << "\nPlease enter a number:" << endl;
    cin >> num;
    return num;
}

enNumberType CheckNumberType(int num)
{
    if (num % 2 == 0) 
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType numberType)
{
    if (numberType == enNumberType::Even)
        cout << "\nNumber is Even" << endl;
    else
        cout << "\nNumber is Odd" << endl;
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}