/*Problem #14:
Write a program to ask the user to enter:
•
Number1
•
Number2
Then print the two numbers , then Swap the two numbers and print them
Example Inputs:
10
20
Outputs

10
20
20
10*/

#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Please enter Number A ? " << endl;
    cin >> num1;

    cout << "Please enter Number B ? " << endl;
    cin >> num2;
}

void Swap(int& A, int& B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void PrintNumbers(int num1, int num2)
{
    cout << "\nNumber1 = " << num1 << endl;
    cout << "Number2 = " << num2 << endl;
}

int main()
{
    int num1 = 0, num2 = 0;

    ReadNumbers(num1, num2);

    PrintNumbers(num1, num2);

    Swap(num1, num2);

    PrintNumbers(num1, num2);

    return 0;
}