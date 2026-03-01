#include <iostream>

using namespace std;

int ReadNumber()
{
    int num = 0;
    cout << "Please enter a number: " << endl;
    cin >> num;
    return num;
}

float CalculateHalfNumber(int num)
{
    return (float)num / 2;
}

void PrintResults(int num)
{
    cout << "\nHalf of " << num << " is " << CalculateHalfNumber(num) << endl;
}

int main()
{
    PrintResults(ReadNumber());
    return 0;
}