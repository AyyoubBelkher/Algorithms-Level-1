#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo info;
    cout << "Please Enter Your Age:" << endl;
    cin >> info.Age;
    
    cout << "Do you have a driver's license? (1 for Yes, 0 for No)" << endl;
    cin >> info.HasDrivingLicense;

    return info; 
}

bool IsAccepted(const stInfo& info) 
{
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