/*
Problem #6:
Write a program to ask the user to enter:
•
First Name
•
Last Name
Then Print Full Name on screen.
Example Input:
Mohammed
Abu Hadhoud
Output

Mohammed Abu-Hadhoud*/

#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};
stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter Your First Name?" << endl;
    cin >> Info.FirstName;

    cout << "Please Enter Your Last Name?" << endl;
    cin >> Info.LastName;

    return Info;
}
string GetFullName(stInfo Info, bool Reversed)
{
    string FullName = "";

    if (Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;

    return FullName;
}
void PrintFullName(const string& FullName)
{   
    cout << "\nYour full name is " << FullName << endl;
}
int main()
{
    PrintFullName(GetFullName(ReadInfo(), true));

    return 0;
}