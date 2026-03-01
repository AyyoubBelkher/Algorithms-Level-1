/*Problem #13:
Write a program to ask the user to enter 3 numbers:
•
A
•
B
•
C
Then Print Max number.
Example Inputs:
30
10
20
Outputs

30*/

#include <iostream>

using namespace std;

void ReadNumbers(int& A, int& B, int& C)
{
    cout << "Please enter Number A ? " << endl;
    cin >> A;

    cout << "Please enter Number B ? " << endl;
    cin >> B;

    cout << "Please enter Number C ? " << endl;
    cin >> C;
}

int MaxOf3Numbers(int A, int B, int C)
{
    if (A > B) 
    {
        if (A > C)
            return A;
        else
            return C;
    }
    else
    {
        if (B > C)
            return B;  // B is the largest
        else
            return C;  // C is larger than B
    }
}

void PrintResults(int Max)
{
    cout << "\n The Maximum Number is: " << Max << endl;
}

int main()
{
    int A = 0, B = 0, C = 0;

    ReadNumbers(A, B, C);

    PrintResults(MaxOf3Numbers(A, B, C));

    return 0;
}