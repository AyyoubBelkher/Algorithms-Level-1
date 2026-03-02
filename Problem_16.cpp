/*Problem #16:
Write a program to calculate rectangle area through diagonal and side area of
rectangle and print it on the screen.
The use should enter:
a
d
Example Inputs:
5
40
Outputs

198.431*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& D)
{
    cout << "Please enter rectangle side A ? " << endl;
    cin >> A;

    cout << "Please enter rectangle diagonal D ? " << endl;
    cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;
}

void PrintResult(float area)
{
    cout << "\nRectangle Area = " << area << endl;
}

int main()
{
    float A, D;

    ReadNumbers(A, D);

    PrintResult(RectangleAreaBySideAndDiagonal(A, D));

    return 0;
}