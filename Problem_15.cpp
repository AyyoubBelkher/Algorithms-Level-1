/*Problem #15:
Write a program to calculate rectangle area and print it on the screen.
Example Inputs:
10
20
Outputs

200*/

#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "Please enter rectangle width A ? " << endl;
    cin >> A;

    cout << "Please enter rectangle length B ? " << endl;
    cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
    return A * B;
}

void PrintResult(float area)
{
    cout << "\nRectangle Area = " << area << endl;
}

int main()
{
    float A, B;

    ReadNumbers(A, B);

    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}