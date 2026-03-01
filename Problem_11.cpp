/*Problem #11:
Write a program to ask the user to enter:
•
Mark1, Mark2, Mark3
Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
Example Inputs:
90
80
70
Outputs

80
PASS*/

#include <iostream>

using namespace std;
enum enPassFail { pass = 1, fail = 2 };

void ReadNumbers(int& mark1, int& mark2, int& mark3)
{
    cout << "Please enter Mark 1 ? " << endl;
    cin >> mark1;

    cout << "Please enter Mark 2 ? " << endl;
    cin >> mark2;

    cout << "Please enter Mark 3 ? " << endl;
    cin >> mark3;
}

int SumOf3Marks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateAverage(int mark1, int mark2, int mark3)
{
    return (float)SumOf3Marks(mark1, mark2, mark3) / 3;
}

enPassFail CheckAverage(float average)
{
    if (average >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}

void PrintResults(float average)
{
    cout << "\n Your Average is: " << average << endl;

    if (CheckAverage(average) == enPassFail::pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Failed" << endl;
}

int main()
{
    int mark1 = 0, mark2 = 0, mark3 = 0;

    ReadNumbers(mark1, mark2, mark3);

    PrintResults(CalculateAverage(mark1, mark2, mark3));

    return 0;
}