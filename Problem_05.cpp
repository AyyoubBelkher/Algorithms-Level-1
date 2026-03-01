/*
Problem #5:
Write a program to ask the user to enter his/her:
•
Age
•
Driver license
•
Has Recommendation!
Then Print
“Hired”
if his\her age is grater than 21 and s/he
has a driver license, otherwise Print
“Rejected”
Or Hire him\her without conditions!*/

#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo info;
    cout << "Please Enter Your Age:" << endl;
    cin >> info.Age;
    
    cout << "Do you have a driver's license? (1 for Yes, 0 for No)" << endl;
    cin >> info.HasDrivingLicense;

    cout << "Do you have a recommendation? (1 for Yes, 0 for No)" << endl;
    cin >> info.HasRecommendation;

    return info; 
}

bool IsAccepted(const stInfo& info) 
{
    if (info.HasRecommendation)
        return 1;
    else
        return (info.Age > 21 && info.HasDrivingLicense);
}

void PrintResult(const stInfo& info) 
{
    if (IsAccepted(info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejected" << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}