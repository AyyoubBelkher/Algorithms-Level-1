/*
Problem 30:
Write a program to calculate factorial of N!
Example: factorial of 6

6 x 5 x 4 x 3 x 2 x 1 = 720
Note: User should only enter positive number, other wise reject it and ask to enter again
Input
6
Outputs

720*/

#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number < 0);
    return Number;
}

int Factorial(int N)
{
    int F = 1;

    for (int Counter = N; Counter >= 1; Counter--)
    {
        F = F * Counter;
    }

    return F;
}

int main()
{
    cout << Factorial(ReadPositiveNumber("Please enter a positive number???")) << endl;

    return 0;
}