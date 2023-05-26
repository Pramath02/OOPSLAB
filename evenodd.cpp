// Design a cpp program to check if given number is even or odd using if else

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    if (n % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";
    return 0;
}