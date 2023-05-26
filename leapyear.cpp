// Design a cpp program to check whether a given year is leap year or not

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year " << endl;
    cin >> year;
    if (year % 100 == 0 && year % 400 == 0)
        cout << "It is a leap year" << endl;
    else if (year % 100 == 0 && year % 400 != 0)
        cout << "It is not a leap year" << endl;
    else if (year % 4 == 0)
        cout << "It is a leap year" << endl;
    else
        cout << "It is not a leap year" << endl;
}