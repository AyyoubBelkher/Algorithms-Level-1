/*Problem #10:
Write a program to ask the user to enter:
•
Mark1, Mark2, Mark3
Then Print the Average of entered Marks
Example Inputs:
90
80
70
Outputs

80*/

#include <iostream>

using namespace std;

void ReadNumbers(int &mark1, int &mark2, int &mark3)
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
    return (float) SumOf3Marks(mark1, mark2, mark3) / 3;
}

void PrintResults(float average)
{
    cout << "\n The average is : " << average << endl;
}

int main()
{
    int mark1 = 0, mark2 = 0, mark3 = 0;

    ReadNumbers(mark1, mark2, mark3);

    PrintResults(CalculateAverage(mark1, mark2, mark3));

    return 0;
}