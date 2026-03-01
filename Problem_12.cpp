/*Problem #12:
Write a program to ask the user to enter:
•
Number1 , Number2
Then Print the Max Number
Example Inputs:
10
20
Outputs

20*/

#include <iostream>

using namespace std;

void ReadNumbers(int& num1, int& num2)
{
    cout << "Please enter Number 1 ? " << endl;
    cin >> num1;

    cout << "Please enter Number 2 ? " << endl;
    cin >> num2;
}

int MaxOf2Numbers(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void PrintResults(int max)
{
    cout << "\n The Maximum Number is: " << max << endl;
}

int main()
{
    int num1 = 0, num2 = 0;

    ReadNumbers(num1, num2);

    PrintResults(MaxOf2Numbers(num1, num2));

    return 0;
}