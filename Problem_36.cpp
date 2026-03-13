/*Problem 36:
Write a program to ask the user to enter:
•
Number1
•
Number 2
•
OperationType
Then perform the calculation according to the Operation Type as follows:
•
“+” : add the two numbers.
•
“-” : Subtract the two numbers.
•
“*” : Multiply the two numbers.
•
“/” : Divide the two numbers.
Example Inputs:
10
20
*
Outputs

200*/

#include <iostream>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
    float Number = 0;

    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOperationType ReadOpType()
{
    char OT = '+';

    cout << "Please enter Operation Type ( +, - , * , / )?\n";
    cin >> OT;

    return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;  // Perform addition.
    case enOperationType::Subtract:
        return Number1 - Number2;  // Perform subtraction.
    case enOperationType::Multiply:
        return Number1 * Number2;  // Perform multiplication.
    case enOperationType::Divide:
        return Number1 / Number2;  // Perform division.
    default:
        return Number1 + Number2;  // Default case (fallback to addition).
    }
}

int main()
{
    float Number1 = ReadNumber("Please enter the first number?");
    float Number2 = ReadNumber("Please enter the second number?");
    
    enOperationType OpType = ReadOpType();

    cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;

    return 0;
}