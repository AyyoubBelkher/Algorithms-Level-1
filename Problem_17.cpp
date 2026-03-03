/*Problem #17:
Write a program to calculate triangle area then print it on the screen.
The use should enter:
a
h
Example Inputs:
10
8
Outputs

40*/

#include <iostream>

using namespace std;

void ReadNumbers(float& A, float& H)
{
    cout << "Please enter triangle base A ? " << endl;
    cin >> A;

    cout << "Please enter triangle height H ? " << endl;
    cin >> H;
}

float TriangleArea(float A, float H)
{
    float area = (A / 2) * H;

    return area;
}

void PrintResult(float area)
{
    cout << "\nTriangle Area = " << area << endl;
}

int main()
{
    float A, H;

    ReadNumbers(A, H);

    PrintResult(TriangleArea(A, H));

    return 0;
}